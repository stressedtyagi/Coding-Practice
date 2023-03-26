#include <iostream>
#include <unordered_map>
using namespace std;
#define ll long long int
int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n, m;
        cin >> n >> m;
        ll count{n-1};
        unordered_map<ll,ll> mp;
        for(ll i = n; i >= 2; i--) {
            ll a = m%i;
            ll k = 0;
            while (a + k*i < n) {
                if(mp.find(a + k*i) != mp.end()) {
                    count += mp[a+k*i];
                }
                k++;
            }
            mp[a]++;
        }
        cout << count << endl;
    }
    return 0;
}