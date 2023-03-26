#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main () {
    int t;
    cin >> t;
    while(t--) {
        ll n, k;
        cin >> n >> k;
        ll maxPossibleDistance = ceil((double)n/k);
        ll possiblePairs;
        if (n%k == 0) 
            possiblePairs = k;
        else {
            maxPossibleDistance = floor(n/k) + 1;
            possiblePairs = n - k*floor(n/k);
        }
        cout << maxPossibleDistance << " " << possiblePairs << endl;
    }

    return 0;
}