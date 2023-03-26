#include "iostream"
using namespace std;
int main() {
  int n;
  cin >> n;   // No of elements in array
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++)
      cout << " ";
    for (int k = 0; k <= i; k++)
      cout << "#";
    cout << '\n';
  }

  return 0;
}
