#include <iostream>
#include <unordered_map>
using namespace std;
#define ll long long int
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,w,wR;
        cin >> n >> w >> wR;
        unordered_map<int,ll> mp;
        for(int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            mp[x]++;
        }
        long long int sum = wR;
        bool check{false};
        for(auto x : mp) {
            if(x.second%2 == 0) {
                sum += (x.first*x.second);
            }else {
                if(x.second-1 > 0)
                    sum += (x.first*(x.second-1));
            }
            if(sum >= w) {
                check = true;
                break;
            }
        }
        if(check) {
            cout << "YES" << endl;
        }else {
            cout << "No" << endl;
        }
    }
    return 0;
}