#include <iostream>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    while(t--) {
        int w1,w2,x1,x2,m;
        cin >> w1 >> w2 >> x1 >> x2 >> m;
        int minPossibleWeight = x1*m;
        ll maxPossibleWeight = x2*m;
        if(w2-w1 >= minPossibleWeight && w2-w1 <= maxPossibleWeight)
            cout << 1 << endl;
        else 
            cout << 0 << endl;
    }
    return 0;
}