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
        int x = n / 3;
        int r = n % 3;
        int a = x;
        int b = x + r;
        int c = x;
        if (a == c)
        {
            a++;
            c--;
        }
        if (a == b && c > 1)
        {
            b++;
            c--;
        }
        if (a >= b && a > 1)
        {
            a--;
            b++;
        }
        cout << a << " " << b << " " << c << endl;
    }
    return 0;
}