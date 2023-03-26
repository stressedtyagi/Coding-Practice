// Moons and Umbrellas
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    for(int k = 1; k <= t; k++) {
        cout << "Case #" << k << ": ";

        int x, y;   // CJ - x, JC - y
        string s;
        int minRate{0};
        cin >> x >> y;
        cin >> s;

        int cj{0}, jc{0};
        size_t n{s.length()};
        for(size_t i = 0; i < n; i++) {
            char a{s[i]}, b{s[i+1]};
            if(a == 'C' && b == 'J') cj++;
            if(a == 'J' && b == 'C') jc++;
        }
        minRate = cj*x + jc*y;
        // cout << "cj : " << cj << ", jc : " << jc << endl;

        for(size_t i = 0; i < n; i++) {
            if(s[i] == '?') {
                
            }
        }
        
    }
    return 0;
}