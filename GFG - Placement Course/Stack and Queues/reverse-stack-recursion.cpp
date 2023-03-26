#include <iostream>
#include <stack>
using namespace std;

void insert_bottom(int x, stack<int> &st) {
    if(st.empty()) {
        st.push(x);
        return;
    }
    int temp = st.top();
    st.pop();
    insert_bottom(x,st);
    st.push(temp);
};

int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);

    auto reverseStack = [](auto&& reverseStack,stack<int>& st) {
        if(st.empty())
            return;
        int x = st.top();
        st.pop();
        reverseStack(reverseStack,st);
        insert_bottom(x,st);
    };
    reverseStack(reverseStack,st);

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    
}