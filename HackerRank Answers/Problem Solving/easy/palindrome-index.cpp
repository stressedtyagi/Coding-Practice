#include <iostream>
using namespace std;
int main() {
    int q;
    cin >> q;
    while(q--) {
        string s;
        cin >> s;
        int index{-1};
        for(int i = 0; i < s.length(); i++) {
            if(s[i] != s[s.length() - i - 1]){
                // cout << i << " -- " << s.length() - i - 1 << endl;
                // cout << s[i] << " -- " << s[s.length() - i - 1] << endl;
                if(s[i] == s[s.length() - i - 2] && s[i+1] == s[s.length() - i - 3])
                    index = s.length() - i - 1;
                else 
                    index = i;
                // for(int j = 0; j < s.length(); j++) if(j != index) cout << s[j];
                // cout << endl;
                break;
            }
        }
        cout << index << endl;
    }
    return 0;
}