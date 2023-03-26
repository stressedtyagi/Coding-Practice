// Retrieving Minimum element from stack - Space O(1)
#include <iostream>
#include <stack>
#include <assert.h>
using namespace std;
void push(int);
void pop();
int top();
int getMin();

// Global Stack
stack<int> st;

// O(1) space
int minEle{-1};

int main() {
    while(1) {
        cout << "0. Exit" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Top" << endl;
        cout << "4. Get Min" << endl;
        int choice;
        cin >> choice;
        cout << "-----------------" << endl;
        switch (choice) {
        case 1: {
            int ele;
            cout << "Element : ";
            cin >> ele;
            push(ele);
            break;
        }
        case 2: {
            pop();
            break;
        }
        case 3: {
            cout << "TOP : " << top() << endl;
            break;
        }
        case 4: {
            cout << "Minimum : " << getMin() << endl;
            break;
        }
        case 0: 
            assert(false);
            break;
        default:
            break;
        }
        cout << "-----------------" << endl;
    }
}

void push(int val) {
    if(st.empty()) {
        st.push(val);
        minEle = val;
    }else if(val >= minEle) {
        st.push(val);
    }else if(val < minEle) {
        st.push(2*val - minEle);
        minEle = val;
    }
}

void pop() {
    if(st.empty())
        return;
    int val = st.top();
    st.pop();
    if(val < minEle)
        minEle = 2*minEle - val;
}
int top() {
    if(st.empty())
        return -1;
    if(st.top() >= minEle)
        return st.top();
    // else if (st.top() < minEle)
        return (minEle);
}
int getMin() {
    return minEle;
}