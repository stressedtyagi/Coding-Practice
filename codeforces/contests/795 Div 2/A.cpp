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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int ansO{0}, ansE{0};
        int i{0};
        while (i < n)
        {
            int x = a[i];
            if (x & 1)
            {
                ansO++;
            }
            else
            {
                ansE++;
            }
            i++;
        }
        cout << min(n - ansO, n - ansE) << '\n';
    }
    return 0;
}
// odd even odd even odd
// odd even even odd even
// even odd even odd odd
// even odd odd even even