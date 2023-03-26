#include <iostream>
#include <algorithm>
#define ll long long int

using namespace std;
int main() {
    int n;
    cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    ll minDiff{INT64_MAX};
    sort(a,a+n);
    for(int i = 0; i < n; i++) {
        if(abs(a[i]-a[i+1]) < minDiff) minDiff = abs(a[i]-a[i+1]);
    }
    cout << minDiff << endl;
    return 0;
}