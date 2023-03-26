#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    
    while(t--) {
        string s;
        cin >> s;
        int groups{0};
        for(int i = 0; i < s.length(); i++) {
            if(s[i]-48 == 1) {
                groups++;
                while(s[i+1]-48 == 1)   i++;
            }
        }
        cout << groups << endl;
    }
    return 0;
}