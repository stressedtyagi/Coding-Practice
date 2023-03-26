#include "iostream"
#include "stdint.h"
#include "algorithm"
using namespace std;
int main() {
  int64_t n;
  int64_t tempSum = 0, finalSum = 0;
  int64_t a[5];
  for (int i = 0; i < 5; i++) {
    cin >> a[i];
  }
  sort(a, a+5);
  cout << a[0] + a[1] + a[2] + a[3] << " " 
       << a[1] + a[2] + a[3] + a[4] << '\n';  
  return 0;
}
