#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        unsigned long long b, w, bc,wc,z;
        cin >> b >> w >> bc >> wc >> z;
        if(bc+z < wc)
            wc = bc+z;
        else if(wc+z < bc)
            bc = wc+z;
        unsigned long long int x = b*bc + w*wc;
        cout << x << endl;
    }
    
    return 0;
}