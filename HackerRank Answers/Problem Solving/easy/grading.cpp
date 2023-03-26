#include "iostream"
using namespace std;
int main () {
  int n, grade; 
  cin >> n;
  if ( n >= 1 &&  n <= 60) {
    for (int i = 0; i < n; i++) {
      cin >> grade;
      if (grade >= 0 && grade <= 100) {
        if (grade < 38) {
          cout << grade << '\n';
        }else {
          int nearestMultipleOfFive = grade + (5 - grade%5);
          if ( nearestMultipleOfFive - grade < 3 )
            cout << nearestMultipleOfFive << '\n';
          else
            cout << grade << '\n';
        }
      }
    }
  }
  return 0;
}