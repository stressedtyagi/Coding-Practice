#include <iostream>
#include <string>
using namespace std;
int main() {
    int q;
    cin >> q;
    while(q--) {
        string s;
        cin >> s;
        string t = "hackerrank";
        int j = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == t[j]){
                j++;
            }
        }
        if(j == t.length())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}