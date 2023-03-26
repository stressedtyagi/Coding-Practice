#include <iostream>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        cout << ((r / 3) - (l - 1) / 3) << endl;
    }
    return 0;
}