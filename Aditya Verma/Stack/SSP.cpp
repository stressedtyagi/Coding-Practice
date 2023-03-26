// Stock Span Problem
#include "iostream"
#include "stack"
using namespace std;
void INPUT(int a[], int n) {
    for(int i = 0; i < n; i++) cin >> a[i];
}
void OUTPUT(int a[], int n) {
    for(int i = 0; i < n; i++) cout << a[i] << " ";
}
int* SSP(int[],int);
int main() {
    int n;
    cin >> n;
    int a[n];
    INPUT(a,n);

    // CODE
    int *r = SSP(a,n);
    // END

    OUTPUT(r,n);
    cout << endl;
    return 0;
}

int* SSP(int a[], int n) {
    stack<pair<int,int>> st;
    int *b = new int[n];
    for(int i = 0; i < n; ++i) {
        while(!st.empty() && st.top().first < a[i])   st.pop();
        if(st.empty()) b[i] = i - (-1);
        else    b[i] = i - st.top().second;
        st.push({a[i],i});
    }
    return b;
}
