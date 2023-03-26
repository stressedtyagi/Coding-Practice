#include <iostream>
using namespace std;

pair<int,int> solve(int *a[],int ele, int n, int m) {
    pair<int,int> pos{-1,-1};
    int i{0},j{m-1};    
    while(i < n && j < m && a[i][j] != ele) {
        if(ele > a[i][j])   i++;
        else    j--;
    }
    if(ele == a[i][j])
        pos.first = i, pos.second = j;
    return pos;
}

int main() {
    int n, m, ele;
    cin >> n >> m >> ele;
    int *a[n];
    for(int i = 0; i < n; i++) {
        a[i] = new int[m];
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    pair<int,int> findCheck = solve(a,ele,n,m);
    if(findCheck.first == -1 || findCheck.second == -1) 
        cout << "Element not Found" << endl;
    else
        cout << "Element : " << ele << " found at : (" << findCheck.first << "," << findCheck.second << ")" << endl;
    for(int i = 0; i < n; i++) {
        delete a[i];
    }
    return 0;
}