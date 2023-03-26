#include <iostream>
#include <vector>
using namespace std;
#define ll int64_t
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n), diff(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        int mx = INT32_MIN;
        bool valid{true};
        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i] && a[i] != b[i])
            {
                valid = false;
                break;
            }
            diff[i] = a[i] - b[i];
            mx = max(a[i] - b[i], mx);
        }
        if (!valid)
        {
            cout << "NO" << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if ((b[i] == 0 && a[i] - b[i] > mx) || (b[i] != 0 && a[i] - b[i] < mx))
                {
                    valid = false;
                    break;
                }
            }
            if (valid)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}