// Maximum Area of rectangle in binary matrix
#include "iostream"
#include "stack"
#include <algorithm>
#include <vector>
using namespace std;
void INPUT(int** a, int n, int m) {
    for(int i = 0; i < n; i++) {
        a[i] = new int[m];
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
}
void OUTPUT(int** a, int n, int m) {
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    } 
}
int solve(int**,int,int);
int MAH(vector<int>,int);
int main() {
    int n,m;
    cin >> n >> m;
    int **a = new int*[n];
    INPUT(a,n,m);
    OUTPUT(a,n,m);

    // CODE
    int maxAreaOfRectangle = solve(a,n,m);
    cout << "Max Area : " << maxAreaOfRectangle << endl;
    // END

    // cout << endl;
    return 0;
}

int solve(int** a, int n,int m) {
    vector<int> v;
    for(int j = 0; j < m; j++) {
        v.push_back(a[0][j]);
    }
    int maxAreaOfReactangle = MAH(v,m);
    for(int i = 1; i < n; i++) {
        for(int j = 0; j < m; j++) {
            v[j] = a[i][j] ? v[j] + a[i][j] : 0;
        }
        maxAreaOfReactangle = max(maxAreaOfReactangle, MAH(v,m));
    }
    return maxAreaOfReactangle;
}

int MAH(vector<int> a, int n) {
    stack<pair<int,int>> st;
    int left[n], right[n], width[n], area[n];


    // NSE - left
    for(int i = 0; i < n; i++) {
        if(st.empty())  left[i] = -1;
        else if(!st.empty() && st.top().first < a[i]) left[i] = st.top().second;
        else if(!st.empty() && st.top().first >= a[i]) {
            while(!st.empty() && st.top().first >= a[i]) st.pop();
            if(st.empty())  left[i] = -1;
            else    left[i] = st.top().second;
        }
        st.push({a[i],i});
    }

    while(!st.empty()) {
        st.pop();
    }

    // NSE - right
    for(int i = n-1; i >= 0; --i) {
        if(st.empty())  right[i] = n;
        else if(!st.empty() && st.top().first < a[i]) right[i] = st.top().second;
        else if(!st.empty() && st.top().first >= a[i]) {
            while(!st.empty() && st.top().first >= a[i]) st.pop();
            if(st.empty())  right[i] = n;
            else    right[i] = st.top().second;
        }
        st.push({a[i],i});
    }

    for(int i = 0; i < n; i++) 
        width[i] = right[i] - left[i] - 1;

    for(int i = 0; i < n; i++)
        area[i] = a[i] * width[i];

    return (*max_element(area,area+n));
}