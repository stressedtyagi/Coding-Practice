#include <iostream>
#include <math.h>
using namespace std;
#define ll long long int
int main() {
    int t;
    cin >> t;
    while(t--) {
        ll k;
        cin >> k;
        if (k > 9) {
            ll m = k;
            ll base = 1,lower = 9;
            while(lower*base < k){
                k = k - lower*base;
                base++;
                lower *= 10;
            }
            if(k!=0)    
                    k--;    
            ll ans = pow(10,base-1)+k/base;  
            if(k==0 && m%9==0)
                ans--;
            cout<<ans<<"\n";
        }else {
            cout << k << endl;
        }
    }
    return 0;
}