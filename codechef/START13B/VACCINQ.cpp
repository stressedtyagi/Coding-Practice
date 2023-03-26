#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p, x, y;
        cin >> n >> p >> x >> y;
        // X  minutes to vaccinate a child
        // Y minutes to vaccinate an elderly person.
        // Pth position of chef
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int i{0}, ans{0};
        while (p != i)
        {
            ans += a[i] == 0 ? x : y;
            i++;
        }
        cout << ans << endl;
    }
    return 0;
}