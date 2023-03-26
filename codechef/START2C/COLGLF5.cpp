#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main () {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<ll> f(n), c(m);
        for(int i = 0; i < n; i++)  cin >> f[i];
        for(int i = 0; i < m; i++)  cin >> c[i];
        int i = 0, j = 0;
        int switchTimes{0};
        int currentChannel{1};
        for(; i < n && j < m;) {
            if(f[i] < c[j]) {
                if(currentChannel == 2) {
                    switchTimes++;
                    currentChannel = 1;
                    i++;
                }else {
                    i++;
                }
            }else if (f[i] > c[j]) {
                if (currentChannel == 1) {
                    switchTimes++;
                    currentChannel = 2;
                    j++;
                }else {
                    j++;
                }
            }
        }
        if(i < n && currentChannel == 2) switchTimes++;
        if(j < m && currentChannel == 1) switchTimes++;
        cout << switchTimes << endl;
    }

    return 0;
}