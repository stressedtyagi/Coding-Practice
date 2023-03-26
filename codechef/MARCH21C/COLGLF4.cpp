#include <iostream>
#define ll long long
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n,e,h,a,b,c;
        cin >> n >> e >> h >> a >> b >> c;
        
        /*
        n -- no. of friends
        e -- no. of eggs left
        h -- no. of chocklate bars left
        a -- price of omelette
        b -- price of chocolate milkshake
        c -- price of chocolate cake

        -> 2  eggs to make an omelette
        -> 3 chocolate bars for a chocolate milkshake
        -> 1 egg and 1 chocolate bar for a chocolate cake
        */

        ll minPrice{INT64_MAX}, reqO, reqM;
        for(int cake = 0; cake <= n; cake++) {
            if(e < cake || h < cake)
                break;
            ll maxO = (e-cake)/2;
            ll maxM = (h-cake)/3;
            if(cake + maxO + maxM < n)
                continue;
            if(a < b) {
                reqO = min(n-cake,maxO);
                reqM = n-cake-reqO;
            }else {
                reqM = min(n-cake,maxM);
                reqO = n-cake-reqM;
            }

            ll price = cake*c + reqM*b + reqO*a;
            minPrice = min(minPrice,price);
        }
        if(minPrice != INT64_MAX)   cout << minPrice << endl;
        else    cout << -1 << endl;
    }
    return 0;
}