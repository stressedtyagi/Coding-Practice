// Nearest Smallest Element/Next Smallest to right/left
#include "iostream"
#include "stack"
using namespace std;
void INPUT(int a[], int n) {
    for(int i = 0; i < n; i++) cin >> a[i];
}
void OUTPUT(int a[], int n) {
    for(int i = 0; i < n; i++) cout << a[i] << " ";
}
int* NSL(int[],int);
int* NSR(int[],int);
int main() {
    int n;
    cin >> n;
    int a[n];
    INPUT(a,n);

    // CODE
    int *r = NSR(a,n);
    // END
    OUTPUT(r,n);
    cout << endl;
    return 0;
}

// Nearest smallest to Left
int* NSL(int a[], int n) {
    int *b = new int[n];
    stack<int> st;
    for(int i = 0; i < n; i++) {
        while(!st.empty() && st.top() >= a[i]) st.pop();
        if(st.empty()) b[i] = -1;
        else    b[i] = st.top();
        st.push(a[i]);
    }
    return b;
}

// Nearest smallest to Right
int* NSR(int a[], int n) {
    stack<int> st;
    int *b = new int[n];
    for(int i = n-1; i >= 0; --i) {
        while(!st.empty() && st.top() >= a[i]) st.pop();
        if(st.empty()) b[i] = -1;
        else    b[i] = st.top();
        st.push(a[i]);
    }
    return b;
}
