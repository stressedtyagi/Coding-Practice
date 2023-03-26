#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        ll k;
        cin >> n >> k;
        vector<ll> a(n),b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        sort(a.begin(),a.end());
        sort(b.begin(),b.end(), [](ll i, ll j) {
            return i > j;
        });
        bool flag{false};
        for(int i = 0; i < n && !flag; i++) {
            if(a[i]+b[i]<k){
                cout << "NO" << endl;
                flag = true;
            }
        }
        if(!flag)   cout << "YES" << endl;
    }
}