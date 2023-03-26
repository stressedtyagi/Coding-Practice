#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main () {
    int t;
    cin >> t;
    while(t--) {
        int n,m;
        cin >> n >> m;
        bool a[m+1]{false};
        a[0] = true;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a[x] = true;
        }
        // for (auto &i : a)
        // {
        //     cout << i << " ";
        // }
        // cout << endl;
        bool flag{false};
        for(int i = 1; i <= m; i++) {
            if(!a[i]) {
                flag = true;
                break;
            }
        }
        if(flag) {
            cout << "Yes" << endl;
        }else {
            cout << "No" << endl;
        }
    }

    return 0;
}