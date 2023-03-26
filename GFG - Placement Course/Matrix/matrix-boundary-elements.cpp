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
    if(n == 1) {
        for(int j = 0; j < m; j++) {
            cout << a[0][j] << " ";
        }
    }else if (m == 1) {
        for(int i = 0; i < n; i++) {
            cout << a[i][m-1] << " ";
        }
    }else {
        for(int j = 0; j < m; j++) {
            cout << a[0][j] << " ";
        }
        for(int i = 1; i < n; i++) {
            cout << a[i][m-1] << " ";
        }
        for(int j = m-2; j >= 0; j--) {
            cout << a[n-1][j] << " ";
        }
        for(int i = n-2; i > 0; i--) {
            cout << a[i][0] << " ";
        }
    }
    cout << endl;
    return 0;
}