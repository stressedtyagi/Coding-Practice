#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        ll finalXor{0};
        for(int i = 0; i < n; i++) {
            finalXor ^= a[i];
        }
        if(finalXor == 0) {
            cout << "YES" << endl;
        }else {
            bool checkFlag{false};
            for(int i = 0; i < n; i++) {
                if((a[i]^finalXor) == 0)
                {
                    checkFlag = true;
                    break;
                }
            }
            if(checkFlag)
                cout << "YES" << endl;
            else 
                cout << "NO" << endl;
        }
        
    }
    return 0;
}