#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        ll x;
        cin >> n >> x;
        vector<pair<int,int>> s(n);
        for(int i = 0; i < n; i++) {
            cin >> s[i].first >> s[i].second;
        }
        
        sort(s.begin(),s.end(), [](pair<int,int> i, pair<int,int> j) {
            return i.second > j.second;
        });
        for(int i = 0; i < n; i++) {
            if(s[i].first <= x) {
                cout << s[i].second << endl;
                break;
            }
        }
    }
    return 0;
}