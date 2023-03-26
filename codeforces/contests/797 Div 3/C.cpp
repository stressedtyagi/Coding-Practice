#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define ll int64_t
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
        vll s(n), f(n), d(n);
        for (int i = 0; i < n; i++)
            cin >> s[i];
        for (int i = 0; i < n; i++)
            cin >> f[i];
        int end{0};
        for (int i = 0; i < n; i++)
        {
            d[i] = s[i] < end ? f[i] - end : f[i] - s[i];
            end = f[i];
        }
        for (int i = 0; i < n; i++)
            cout << d[i] << " ";
        cout << endl;
    }
    return 0;
}