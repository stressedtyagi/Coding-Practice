#include <bits/stdc++.h>
#define ll long long
#define inf 1000000000
using namespace std;
bool solve(ll x, ll y)
{
    double c = log(x) / log(y);
    cout << c << endl;
    return (c < 1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (b % a == 0 || a % b == 0)
            cout << "Yes" << endl;
        else if (solve(a, b))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}