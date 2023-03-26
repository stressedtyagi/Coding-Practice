#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int l;
        cin >> l;
        string s;
        cin >> s;
        int good{0}, bad{0};
        bool flag{false};
        for(int i = 0; i < l; i++) {
            if(s[i] == '1') {
                good++;
            }else {
                bad++;
            }
            if(good >= bad) {
                flag = true;
                break;
            }
        }
        if(flag) {
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }
}