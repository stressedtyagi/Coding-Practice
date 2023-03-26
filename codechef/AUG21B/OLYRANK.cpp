#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int g1, s1, b1, g2, s2, b2;
        cin >> g1 >> s1 >> b1 >> g2 >> s2 >> b2;
        int x = g1 + s1 + b1;
        int y = g2 + s2 + b2;
        if (x > y)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}