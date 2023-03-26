#include <iostream>
#include <math.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,m,k;
        cin >> n >> m >> k;
        int finalXor{0};
        for(int i = 1; i <= n; i++) {
            if(min(i,m)%2)
                finalXor ^= (k+i+1);
        }
        for(int i = 2; i <= m; i++) {
            if(min(n,m-i+1)%2)
                finalXor ^= (k+i+n);
        }
        cout << finalXor << endl;
    }
    return 0;
}