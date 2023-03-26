// Maximum Area Histogram Problem
#include "iostream"
#include "stack"
#include <algorithm>
using namespace std;
void INPUT(int a[], int n) {
    for(int i = 0; i < n; i++) cin >> a[i];
}
void OUTPUT(int a[], int n) {
    for(int i = 0; i < n; i++) cout << a[i] << " ";
}
int solve(int[],int);
int main() {
    int n;
    cin >> n;
    int a[n];
    INPUT(a,n);

    // CODE
    int maxAreaOfHistogram = solve(a,n);
    cout << "Max Area : " << maxAreaOfHistogram << endl;
    // END

    // OUTPUT(r,n);
    // cout << endl;
    return 0;
}

int solve(int a[], int n) {
    stack<pair<int,int>> st;
    int right[n];
    int left[n];
    // finding NSR
    for(int i = n-1; i >= 0; i--) {
        while(!st.empty() && st.top().first >= a[i]) st.pop();
        if(st.empty()) right[i] = n;
        else right[i] = st.top().second;
        st.push({a[i],i});
    }
    while(!st.empty()) st.pop();
    
    // finding NSL
    for(int i = 0; i < n; i++) {
        while(!st.empty() && st.top().first >= a[i]) st.pop();
        if(st.empty()) left[i] = -1;
        else left[i] = st.top().second;
        st.push({a[i],i});
    }

    int width[n];
    for(int i = 0; i < n; i++) {
        width[i] = right[i] - left[i] - 1;
    }

    int area[n];
    for(int i = 0; i < n; i++) {
        area[i] = width[i] * a[i];
    }
    int maxAreaOfReactangle = *max_element(area,area+n);
    return maxAreaOfReactangle;
}
