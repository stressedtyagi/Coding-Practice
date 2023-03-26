#include <bits/stdc++.h>

using namespace std;

#define ll long long
typedef vector<ll> vll;
#define io                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main()
{
    io;

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            b[i] = i + 1;

        ll l = 0, r = 0;
        bool valid{true};
        while (r < n)
        {
            while (r < n - 1 and a[r] == a[r + 1]) // get range [l,r] with equal values
                ++r;
            if (l == r)
                valid = false;
            else
                rotate(b.begin() + l, b.begin() + r, b.begin() + r + 1); // rotate right in range [l,r]
            l = r + 1;
            ++r;
        }
        if (valid)
        {
            for (auto &x : b)
                cout << x << " ";
            cout << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}