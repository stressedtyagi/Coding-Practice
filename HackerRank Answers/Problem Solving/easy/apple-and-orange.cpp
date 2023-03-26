/*
  - s: integer, starting point of Sam's house location.
  - t: integer, ending location of Sam's house location.
  - a: integer, location of the Apple tree.
  - b: integer, location of the Orange tree.
  - apples: integer array, distances at which each apple falls from the tree.
  - oranges: integer array, distances at which each orange falls from the tree.
*/

#include "iostream"
using namespace std;
int main () {
  int s,t; 
  cin >> s >> t;
  int a,b;
  cin >> a >> b;
  int m,n;
  cin >> m >> n;
  int appleInRange = 0, orangeInRange = 0;
  int x = 0;
  for (int i = 0; i < m; i++) {
    cin >> x;
    int pointFromAppleTree = x + a;
    if (pointFromAppleTree >= s && pointFromAppleTree <= t ) 
      appleInRange++;
  }

  x = 0;
  for (int i = 0; i < n; i++) {
    cin >> x;
    int pointFromOrangeTree = x + b;
    if (pointFromOrangeTree >= s && pointFromOrangeTree <= t ) 
      orangeInRange++;
  }

  cout << appleInRange << '\n' << orangeInRange << '\n';


  return 0;
}