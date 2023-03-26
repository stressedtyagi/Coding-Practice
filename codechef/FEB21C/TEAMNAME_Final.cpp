#include <bits/stdc++.h>
#define getI(T) cin >> T
#define TC int T; getI(T); while(T--)
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    TC{
        int n;
        cin >> n;
        vector<string> s(n);
        map<string, set<char>> mp;

        for(int i = 0; i < n; i++) cin >> s[i];

        for(int i = 0; i < n; i++) {
            string key = s[i].substr(1,s[i].length() - 1);
            mp[key].insert(s[i][0]);
        }
        
        int funnyWords{0};
        for(auto i = mp.begin(); i != mp.end(); i++) {
            for(auto j = mp.begin(); j != mp.end(); j++) {
                if(j!=i) {
                    set<char> inter;
                    set_intersection(i->second.begin(),i->second.end(),j->second.begin(),j->second.end(),inserter(inter,inter.begin()));
                    int interSectionSize = inter.size();
                    funnyWords += ((i->second.size()-interSectionSize) * (j->second.size() - interSectionSize));
                }
            }
        }
        cout << funnyWords << endl;
    }
    return 0;
}
