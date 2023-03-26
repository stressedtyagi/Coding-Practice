#include <bits/stdc++.h>
using namespace std;
int main () {
  int t;
  cin >> t;
  while (t--) {
    int n,m;
    cin >> n >> m;
    // Declaration of array
    string **a = new string*[n];
    for (int i = 0; i < n; i++) {
      a[i] = new string[m];
    } 
    // Input
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
       cin >> a[i][j];
      }
      cout << '\n';
    }
    // Main Code
    string ans = "YES";
    if (n == 2 && m == 2) {
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
          if (a[i][j].compare("#") == 0) {
            ans = "NO";
            break;
          }
        }
      }
    }else {
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {        
          if (a[i][j].compare("#") == 0) {
            if (!((i == 0 && j == 0) || (i == 0 && j == m-1) || (i == n-1 && j == 0) || (i == n-1 && j == m-1))) {
              ans = "NO";
              break;
            }
          }
        }
      }
    }
    cout << ans << '\n';
  }
  return 0;
}