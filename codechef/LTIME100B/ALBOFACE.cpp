#include <iostream>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n == 1)
            cout << "Alice" << endl;
        else if (n == 2)
            cout << "Bob" << endl;
        else if (n % 2 != 0)
        {
            n = n + 1;
            if ((n & (n - 1)) == 0)
            {
                cout << "Alice" << endl;
            }
            else
            {
                cout << "Bob" << endl;
            }
        }
        else
        {
            n = n + 2;
            if ((n & (n - 1)) == 0)
            {
                cout << "Bob" << endl;
            }
            else
            {
                cout << "Alice" << endl;
            }
        }
    }
    return 0;
}