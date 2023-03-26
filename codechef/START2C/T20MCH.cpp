#include <iostream>
using namespace std;
int main () {
    int r, o, c;
    cin >> r >> o >> c; // R - team B score, o - overs elapsed, c - runs made by team b till now
    int remainingOvers = 20-o;
    int maxRunCanScore = remainingOvers*6*6;
    if(c+maxRunCanScore > r) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}