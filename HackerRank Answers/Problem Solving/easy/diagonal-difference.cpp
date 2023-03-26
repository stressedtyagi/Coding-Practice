#include "iostream"
#include "cmath"
#include "string.h"
using namespace std;
int main() {
    int n;
    cin >> n;    

    int **a = new int*[n]; 

    for(int i = 0; i < n; i++) {
      a[i] = new int(n);
    }
    
    int sum_1 = 0 , sum_2 = 0;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++){
        cin >> a[i][j];
        if (i == j) {
          sum_1 += a[i][j];
        }
        if (i == n - j - 1) {
          sum_2 += a[i][j];
        }
      }
    }
    cout << std::abs(sum_1 - sum_2);
    return 0;
}
