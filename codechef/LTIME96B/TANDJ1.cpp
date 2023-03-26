#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;
        // tom - (a,b)
        // jerry - (c,d)
        int dist = abs(a - c) + abs(b - d);
        if (dist == k)
        {
            cout << "Yes" << endl;
        }
        else if (dist < k && (k - dist) % 2 == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}