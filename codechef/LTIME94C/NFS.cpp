#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    while(t--) {
        int u, v, a, s; // U-initial velocity, s-meter away turn, v-requried velocity
        cin >> u >> v >> a >> s;
        int enterV = pow(u,2)-2*a*s;
        // cout << enterV << endl;
        if(enterV >= 0) {
            double maxDe = sqrt(enterV);
            if(maxDe <= v) {
                cout << "Yes" << endl;
            }else {
                cout << "No" << endl;
            }
        }else {
            cout << "Yes" << endl;
        }
    }
    return 0;
}