#include <iostream>
using namespace std;
#define ull unsigned long long int
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        n = n-1;
        ull x = 1;
        ull MOD = 1e9+7;
        if(n == 0) {
            x = 1;
        }else {
            ull temp = 2;
            for(int i = n; i > 0; i >>= 1) {
                if(i%2 != 0)
                    x = (x * temp)%MOD;
                temp = (temp * temp)%MOD;
            }
        }
        cout << x << endl;
    }
    return 0;
}