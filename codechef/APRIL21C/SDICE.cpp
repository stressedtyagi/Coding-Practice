#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll solve(ll n) {
    ll levels = n/4;
    ll noOfFiveFaces{0};
    ll noOfFourFaces{0};
    ll noOfThreeFaces{0};
    ll noOfTwoFaces{0};
    ll levelCost{0};
    if(levels == 0) {
        if(n == 1) {
            noOfFiveFaces = 1;
        }else if(n == 2) {
            noOfFourFaces = 2;
        }else if(n == 3) {
            noOfFourFaces = 2;
            noOfThreeFaces  = 1;
        }
    }else {
        levelCost = (levels - 1) > 0 ? (levels-1)*44 : 0;
        // topMostLevel
        ll dieOnTopLevel = n%4;
        if(dieOnTopLevel) {
            if(dieOnTopLevel == 1) {
                noOfFiveFaces = 1;
                noOfTwoFaces = 1;
                noOfThreeFaces = 3;
            }else if(dieOnTopLevel == 2) {
                noOfFourFaces = 2;
                noOfTwoFaces = 2;
                noOfThreeFaces = 2;
            }else if(dieOnTopLevel == 3) {
                noOfFourFaces = 2;
                noOfThreeFaces  = 2;
                noOfTwoFaces = 3;
            }   
        }else {
            noOfThreeFaces = 4;
        }
    }

    ll MaxCost = levelCost + noOfTwoFaces*11 + noOfThreeFaces*15 + noOfFourFaces*18 + noOfFiveFaces*20;
    return MaxCost;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}