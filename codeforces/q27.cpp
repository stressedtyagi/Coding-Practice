#include <iostream>
using namespace std;
int main() {
    string s,t;
    cin >> s >> t;
    for(int i = 0; i < s.length(); i++) {
        if(toupper(s[i]) != toupper(t[i])) {
            cout << (toupper(s[i]) > toupper(t[i]) ? 1 : -1) << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}