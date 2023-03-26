// Moons and Umbrellas
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    for(int k = 1; k <= t; k++) {
        cout << "Case #" << k << ": ";

        int x, y;   // CJ - x, JC - y
        cin >> x >> y;
        string s;
        cin >> s;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '?') {
                if(i != 0 && i != s.length()-1) {
                    if(s[i-1] != 'C' && s[i+i] == 'C') {
                        s[i] = 'C';
                    }
                    else if(s[i-1] != 'J' && s[i+i] == 'J') {
                        s[i] = 'J';
                    }
                    else if(s[i-1] != 'J' && s[i+i] == 'C') {
                        if (x > y) {
                            s[i] = 'C';
                        }else {
                            s[i] = 'J';
                        }
                    }else if(s[i-1] != 'C' && s[i+i] == 'J') {
                        if (x > y) {
                            s[i] = 'C';
                        }else {
                            s[i] = 'J';
                        }
                    }
                }else {
                    if(i == 0) {
                        if(s[i+1] == 'C') {
                            s[i] = 'C';
                        }else {
                            s[i] = 'J';
                        }
                    }else {
                        if(s[i-1] == 'C') {
                            s[i] = 'C';
                        }else {
                            s[i] = 'J';
                        }
                    }
                }
            }
        }
        cout << s << endl;
        
    }
    return 0;
}