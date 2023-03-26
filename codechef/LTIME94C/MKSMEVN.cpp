#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        ll sum{0};
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        if(sum%2 != 0) {    // current sum is odd
            bool checkFlag{false};
            for(int i = 0; i < n; i++) {
                if(a[i]%2 == 0) {
                    int temp = ceil( ( a[i] / 2 ) - 1 );
                    ll p = max(0,temp);
                    // ll aP = pow(a[i],p);
                    // cout << a[i] << " " << p << " " <<  aP << endl;
                    // int newSum = sum - a[i] + aP;
                    if(p == 0) {
                        // cout << a[i] << " --> " << endl;
                        checkFlag = true;
                        break;
                    }
                }
            }
            if(checkFlag) {
                cout << 1 << endl;
            }else {
                cout << -1 << endl;
            }
        }else {
            cout << 0 << endl;
        }
    }
    return 0;
}