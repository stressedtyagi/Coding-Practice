#include <iostream>
#include <numeric>
using namespace std;
#define ll long long int
int main() {
    int n;
    cin >> n;
    ll a[n];
    long MOD = (long)1e9+7;
    ll sum = 0;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
        sum = ((sum%MOD)+MOD)%MOD;
    }
    int q;
    cin >> q;
    for(int i = 0; i < q; i++) {
        int x;
        cin >> x;
        sum += sum;
        sum = ((sum%MOD)+MOD)%MOD;
        cout << sum << endl;
    }
}