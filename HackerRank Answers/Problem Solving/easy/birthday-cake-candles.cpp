#include "iostream"
using namespace std;
int main() {
  int n;
  cin >> n;
  int candelHeight, candelBlowed = 1;
  cin >> candelHeight;
  int maxHeightCandel = candelHeight;
  for (int i = 2; i <= n; i++) {
    cin >> candelHeight;
    if (candelHeight == maxHeightCandel) {
      candelBlowed++;
    }else if (candelHeight > maxHeightCandel) {
      maxHeightCandel = candelHeight;
      candelBlowed = 1;
    }
  }
  cout << candelBlowed;
  return 0;
}
