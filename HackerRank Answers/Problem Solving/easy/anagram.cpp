#include <iostream>
#include <vector>
using namespace std;
int main () {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int changes{-1};
        int n = s.length();
        if(n%2 == 0){
            changes = 0;
            int common{0};
            vector<int> v(n/2+1);
            for(int i = 0; i < n/2; i++){
                for(int j = n/2; j < n; j++){
                    if(s[i] == s[j] && !v[abs(n/2 - j)]){
                        common++;
                        v[abs(n/2 -j)] = 1;
                        break;
                    }
                }
            }
            changes = n/2 - common;
        }
        cout << changes << endl;
    }
    return 0;
}