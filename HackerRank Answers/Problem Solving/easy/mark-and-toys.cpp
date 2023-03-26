#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;
int main() {
    int n;
    cin >> n;
    ll k;
    cin >> k;
    int a[n];
    for(int i = 0; i < n; i++)  cin >> a[i];
    sort(a,a+n);
    int toys{0},j{0};
    while(k > 0) {
        k -= a[j];
        if(k >= 0)   toys++;
        j++;
    }
    cout << toys << endl;
    return 0;
}