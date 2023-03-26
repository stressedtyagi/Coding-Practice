#include "iostream"
#include "iomanip"
using namespace std;
int main() {
  int n;
  cin >> n;   // No of elements in array
  
  int ele;
  int positive = 0, negative = 0, zero = 0;
  for (int i = 0; i < n; i++ ) {
    cin >> ele;
    if (ele < 0) {
      negative++;
    }else if ( ele > 0 ) {
      positive++;
    }else if ( ele == 0 ) {
      zero++;
    }
  } 
  
  cout << std::setprecision(6) << (double) positive / n << '\n' 
       << std::setprecision(6) << (double) negative / n << '\n' 
       << std::setprecision(6) << (double) zero / n << '\n'; 

  return 0;
}
