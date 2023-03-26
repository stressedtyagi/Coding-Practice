#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int maxStar{0};
        bool flag{false};
        for(int i = 0; i < n; i++) {
            maxStar = 0;
            if(s[i] == '*') {
                i++;
                maxStar++;
                while(i < n && s[i] == '*') {
                    maxStar++;
                    i++;
                } 
            }
            if(maxStar == k) {
                flag = true;
                break;
            }
        }
        if(flag)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}