#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n / 2 + 1], b[n / 2 + 1];
        if ((n / 2) % 2 == 0)
        {
            cout << "YES" << endl;
            int flag = (n / 2) / 2;
            int i{1}, j{0};
            while (i <= flag)
            {
                a[j++] = i;
                i++;
            }
            int k{0};
            while (i <= n - flag)
            {
                b[k++] = i;
                i++;
            }
            while (i <= n)
            {
                a[j++] = i;
                i++;
            }
            for (size_t i = 0; i < n / 2; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
            for (size_t i = 0; i < n / 2; i++)
            {
                cout << b[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}