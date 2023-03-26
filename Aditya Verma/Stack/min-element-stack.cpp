// Retrieving Minimum element from stack - Space O(n)
#include <iostream>
#include <stack>
#include <assert.h>
using namespace std;
void push(int);
void pop();
int getMin();

// Global Stack
stack<int> st;
stack<int> ss;

int main() {
    while(1) {
        cout << "0. Exit" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Get Min" << endl;
        int choice;
        cin >> choice;
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
            cout << "Minimum : " << getMin() << endl;
            break;
        }
        case 0: 
            assert(false);
            break;
        default:
            break;
        }
    }
}

void push(int val) {
    st.push(val);
    if(ss.empty() || ss.top() >= val)
        ss.push(val);
}

void pop() {
    if(st.empty())
        return;
    int val = st.top();
    st.pop();
    if(!ss.empty() && ss.top() == val)
        ss.pop();
}

int getMin() {
    return ss.empty() ? -1 : ss.top();
}