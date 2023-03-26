#include <iostream>
#include <string>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        for(int i = 0; i < s.length(); i++) {
            // cout << s.substr(i,5) << endl;
            if(s.substr(i,5) == "party")
                s.replace(i,5,"pawri");
        }
        cout << s << endl;
    }
    return 0;
}