#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    while(t--) {
        ll a,y,x;
        cin >> a >> y >> x; // x-lights these many candles, y-single candel burn time, a-girl arival time
        ll currCandles = x*(a)+1;
        ll burntOutCandles;
        if(a>=y)
            burntOutCandles = x*(a-y)+1;
        else 
            burntOutCandles = 0;
        cout << currCandles - burntOutCandles << endl;
    }
    return 0;
}