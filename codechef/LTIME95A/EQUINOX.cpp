#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        long long int a, b, n;
        cin >> n >> a >> b;
        string s;
        long long int sar{0}, anu{0};
        for(int i = 0; i < n; i++) {
            cin >> s;
            if(s[0] == 'E' || s[0] == 'Q' || s[0] == 'U' || s[0] == 'I' || s[0] == 'N' || s[0] == 'O' || s[0] == 'X') {
                sar += a;
            }else {
                anu += b;
            }
        }
        if(sar == anu) cout << "DRAW" << endl;
        else if (sar < anu) cout << "ANURADHA" << endl;
        else cout << "SARTHAK" << endl;
    }
}