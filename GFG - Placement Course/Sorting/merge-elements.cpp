#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

pair<int*,int> merge(int*,int*,int,int);
int main() {
    int n, m;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    cin >> m;
    int b[n];
    for(int i = 0; i < m; i++) cin >> b[i];
    
    pair<int*,int> final = merge(a,b,n,m);

    for(int i = 0; i < final.second; i++) {
        cout << final.first[i] << " ";
    }
    cout << endl;
    return 0; 
}

pair<int*,int> merge(int *a, int *b,int n,int m) {
    int *res = new int[n+m];
    int k{0};
    int i{0}, j{0};
    while(i < n && j < m) {
        if(a[i] < b[j])
            res[k++] = a[i++];
        else if (a[i] > b[j])
            res[k++] = b[j++];
        else {
            res[k++] = a[i++];
            res[k++] = b[j++];
        }
    }

    while(i < n)
        res[k++] = a[i++];

    while(j < m)
        res[k++] = b[j++];

    return {res,k};
}