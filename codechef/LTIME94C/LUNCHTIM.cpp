#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> temp(n);
        map<int,vector<int>> h;
        for(int i = 0; i < n; i++) cin >> temp[i];
        for(int i = 0; i < n; i++) h[temp[i]].push_back(i);
        for(auto i = h.begin(); i != h.end(); i++) {
            if(i->second.size() > 1) {
                for(auto j = i->second.begin(); j != i->second.end(); j++) {
                    for(auto k = j; k != i->second.end(); k++) {
                        
                    }
                }
            }
        }       
    }
    return 0;
}