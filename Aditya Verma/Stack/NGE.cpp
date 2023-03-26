// Nearest Greatest Element/Next largest to right/left
#include "iostream"
#include "stack"
using namespace std;
void INPUT(int a[], int n) {
    for(int i = 0; i < n; i++) cin >> a[i];
}
void OUTPUT(int a[], int n) {
    for(int i = 0; i < n; i++) cout << a[i] << " ";
}
int* solve(int[],int);
int main() {
    int n;
    cin >> n;
    int a[n];
    INPUT(a,n);

    // CODE
    int *r = solve(a,n);
    // END
    OUTPUT(r,n);
    cout << endl;
    return 0;
}

// Nearest Greatest to Right
// int* solve(int a[], int n) {
//     stack<int> st;
//     int *b = new int[n];
//     for(int i = n-1; 0 <= i; --i) {
//         while(!st.empty() && st.top() <= a[i]) st.pop();
//         if(st.empty()) b[i] = -1;
//         else    b[i] = st.top();
//         st.push(a[i]);
//     }
//     return b;
// }

// Nearest Greatest to Left
int* solve(int a[], int n) {
    int *b = new int[n];
    stack<int> st;
    for(int i = 0; i < n; i++) {
        while(!st.empty() && st.top() <= a[i]) st.pop();
        if(st.empty())  b[i] = -1;
        else b[i] = st.top();
        st.push(a[i]);
    }
    return b;
}