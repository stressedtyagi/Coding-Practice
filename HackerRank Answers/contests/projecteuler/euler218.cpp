#include "iostream"
#include <algorithm>
#include <math.h>
using namespace std;
int main () {
  int q, count = 0;
  long long int n;
  cin >> q;
  for (int i = 0; i < q; i++){
    cin >> n;
    count = 0;
    if (n >= 25) {
      cout << count << '\n';
    }
  } 
  return 0;
}



/*
bool prefectRightTriangle(int,int,int);
bool superPrefectRightTriangle(int,int,int);
int main () {
  int a = 7, b = 24, c = 0;
  int q, count = 0;
  long long int n;
  cin >> q;
  for (int i = 0; i < q; i++){
    cin >> n;
    count = 0;
    if (n >= 25) {
      for (int j = 0; j <= n; j++) {
          c = j;
          if ((a*a + b*b) == c*c) {
            bool SPRT = false;
            bool PRT = prefectRightTriangle(a,b,c);
            if (PRT) {
              SPRT = superPrefectRightTriangle(a,b,c);
            }
            if (PRT && !SPRT) count++;
          }
        }
      cout << count << '\n';
    }
  } 
  return 0;
}

bool prefectRightTriangle(int a, int b, int c) {
  bool result = false;
  if (__gcd(a,b) == 1 && __gcd(b,c) == 1) {
    if (sqrt(c) - floor(sqrt(c)) == 0) {
      result = true;
    }
  }
  return result;
}

bool superPrefectRightTriangle(int a, int b, int c){
  bool result = false;
  int area = (a*b)/2; 
  if (area % 6 == 0 && area % 28 == 0){
    result = true;
  }
  return result;
}
*/