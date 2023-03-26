#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    bool check[26]{false};
    bool flag{true};
    for(int i = 0; i < s.length(); i++) {
        if(check[s[i]-97] == false) {
            flag = !flag;
            check[s[i]-97] = true;
        }
    }
    if(flag) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;
    return 0;
}