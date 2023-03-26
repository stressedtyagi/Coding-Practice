#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    
    // Time - O(n^2), Space - O(n^2)
    // int temp[n][m];
    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < m; j++) {
    //         temp[n-j-1][i] = a[i][j];
    //     }
    // }
    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < m; j++) {
    //         cout << temp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // Time - O(n^2), Space - O(1)
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(j > i)
                swap(a[i][j],a[j][i]);
        }
    }

    for(int j = 0; j < m; j++) {
        for(int i = 0; i < n/2; i++) {
            swap(a[i][j],a[n-i-1][j]);
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}