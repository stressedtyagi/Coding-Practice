#include <iostream>
#include <deque>
using namespace std;
template<typename T>
class queue {
    public :
        queue() 
            : front{-1}, back{-1}
            {}
        void enqueue(T&);
        T dequeue();
        const bool isEmpty() const;
        const size_t getSize() const;
        const T getFront() const;
        const T getBack() const;
        const void print() const;
    private :
        deque<T> dq;
        int front,back;
};

template<typename T>
void queue<T>::enqueue(T& val) {
    dq.push_back(val);
    if(getSize() == 1) {
        front = back = val;
    }else {
        back = val;
    }
}

template<typename T>
T queue<T>::dequeue() {
    if(isEmpty()) {
        return -1;
    }else {
        T val = dq.front();
        dq.pop_front();
        if(isEmpty())
            front = back = -1;
        else
            front = dq.front();
        return val;
    }
}

template<typename T>
T const queue<T>::getFront() const{
    return front;
}

template<typename T>
T const queue<T>::getBack() const{
    return back;
}

template<typename T>
bool const queue<T>::isEmpty() const{
    return dq.empty();
}

template<typename T>
size_t const queue<T>::getSize() const{
    return dq.size();
}

template<typename T>
void const queue<T>::print() const{
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
    queue<int> q;
    while(true) {
        cout << "----------------------------" << endl;
        cout << "0. EXIT" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. DeQueue" << endl;
        cout << "3. GetFront" << endl;
        cout << "4. GetBack" << endl;
        cout << "5. Size" << endl;
        cout << "6. Print" << endl;
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
                q.enqueue(val);
                break;
            }            
            case 2: {
                int val = q.dequeue();
                if(val != -1) {
                    cout << "Element with value : " << val << " - deleted successfully" << endl;
                }else {
                    cout << "!! Error : Something is wrong !!" << endl;
                }
                break;
            }
            case 3: {
                if(!q.isEmpty()) {
                    cout << "Element at front of queue is : " << q.getFront() << endl;
                }else {
                    cout << "!! Queue is Empty !!" << endl;
                }
                break;
            }
            case 4: {
                if(q.isEmpty()) {
                    cout << "!! Queue is Empty !!" << endl;
                }else {
                    cout << "Element at back of queue is : " << q.getBack() << endl;
                }
                break;
            }
            case 5: {
                cout << "Size of queue is : " << q.getSize() << endl;
                break;
            }
            case 6: {
                q.print();
                break;
            }
            default:
                cout << endl << "!! Error : Incorrect Option !!" << endl;
                break;
        }
    }   
    return 0;
}