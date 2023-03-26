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
        // Approach [Sliding Window] - Moving a window of specific length over the array

        int n, k;
        string str;
        cin >> n >> k;
        cin >> str;
        int w{0}, b{0};
        for (int i = 0; i < k; i++)
        {
            w = str[i] == 'W' ? w + 1 : w;
            b = str[i] == 'B' ? b + 1 : b;
        }
        int mi = w;
        // cout << w << " ";
        for (int i = k; i < n; i++)
        {
            w = str[i - k] == 'W' ? w - 1 : w;
            b = str[i - k] == 'B' ? b - 1 : b;
            w = str[i] == 'W' ? w + 1 : w;
            b = str[i] == 'B' ? b + 1 : b;
            // cout << i << ":" << w << " ";
            mi = min(mi, w);
        }
        cout << mi << endl;
    }
    return 0;
}