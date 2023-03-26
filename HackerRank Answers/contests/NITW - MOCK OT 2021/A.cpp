#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s,r;
        cin >> s >> r;
        map<char,int> sMap;
        map<char,int> rMap;
        size_t n{s.length()};
        // for(int i = 0; i < n; i++) {
        //     sMap[s[i]]++;
        // }
        sort(s.begin(), s.end());
        // cout << s << endl;
        // for(auto i = sMap.begin(); i != sMap.end(); i++) {
        //     cout << i->first << " " << i->second << endl;
        // }
        bool checkFlag{false};
        for(int i = 0; i < r.length(); i++) {
            string checkStr = r.substr(i,n);
            if(checkStr.length() == n) {
                sort(checkStr.begin(),checkStr.end());
                if(checkStr == s)   {
                    checkFlag = true;
                    break;
                }
            }else {
                break;
            }
        }
        if(checkFlag)   cout << "YES" << endl;
        else    cout << "NO" << endl;
    }
    return 0;
}