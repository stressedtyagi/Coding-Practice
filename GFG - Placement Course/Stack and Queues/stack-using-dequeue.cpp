#include <iostream>
#include <deque>
using namespace std;
template<typename T>
class stack {
    public :
        stack() 
            : top{-1}{}
        void push(T&);
        T pop();
        const bool isEmpty() const;
        const size_t getSize() const;
        const T peek() const;
        const void print() const;
    private :
        deque<T> dq;
        int top;
};

template<typename T>
void stack<T>::push(T& val) {
    dq.push_back(val);
    top = val;
}

template<typename T>
T stack<T>::pop() {
    if(isEmpty()) {
        return -1;
    }else {
        T val = dq.back();
        dq.pop_back();
        if(isEmpty())
            top = -1;
        else
            top = dq.back();
        return val;
    }
}

template<typename T>
T const stack<T>::peek() const{
    return top;
}

template<typename T>
bool const stack<T>::isEmpty() const{
    return dq.empty();
}

template<typename T>
size_t const stack<T>::getSize() const{
    return dq.size();
}

template<typename T>
void const stack<T>::print() const{
    if(!isEmpty()) {
        auto it = dq.begin();
        while(it != dq.end()) {
            cout << *it;
            it++;
            if(it != dq.end()) 
                cout << "->";
        }
    }
    cout << endl;
}

int main() {
    stack<int> st;
    while(true) {
        cout << "----------------------------" << endl;
        cout << "0. EXIT" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Size" << endl;
        cout << "5. Print" << endl;
        int choice;
        cout << "Choice --> ";
        cin >> choice;
        cout << endl << "----------------------------" << endl;
        switch (choice) {
            case 0: {
                return 0;
                break;
            }
            case 1: {
                int val;
                cout << "Element Value : ";
                cin >> val;
                st.push(val);
                break;
            }            
            case 2: {
                int val = st.pop();
                if(val != -1) {
                    cout << "Element with value : " << val << " - deleted successfully" << endl;
                }else {
                    cout << "!! Error : Something is wrong !!" << endl;
                }
                break;
            }
            case 3: {
                if(st.isEmpty()) {
                    cout << "!! Stack is Empty !!" << endl;
                }else {
                    cout << "Element at top of stack is : " << st.peek() << endl;
                }
                break;
            }
            case 4: {
                cout << "Size of stack is : " << st.getSize() << endl;
                break;
            }
            case 5: {
                st.print();
                break;
            }
            default:
                cout << endl << "!! Error : Incorrect Option !!" << endl;
                break;
        }
    }   
    return 0;
}