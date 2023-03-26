#include <iostream>
using namespace std;
#define ll int64_t
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        ll n,m,x;
        cin >> n >> m >> x;
        ll i = x%n;
        if(i == 0)  i = n;
        ll j = m - (((n*m -  (n-i)) - x)/n) ;
        // cout << i << " " << j << endl;
        ll result = ((i)*m) - (m-j);
        cout << result << endl;
    }
    return 0;
}