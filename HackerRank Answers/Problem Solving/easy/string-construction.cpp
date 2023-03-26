#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        string p{""};
        int n{s.length()};
        int cost{0};
        unordered_set<char> a;
        for(int i=0; i < n; i++){
            a.insert(s[i]);
        }
        cout << a.size() << endl;
    }
    return 0;
}