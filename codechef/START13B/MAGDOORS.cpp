#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int flipCount = 0;
        for (int i = 0; i < n; i++)
        {
            int currentStatus = s[i] - '0';
            int newStatus = (currentStatus + flipCount) % 2;
            if (newStatus == 0)
            {
                flipCount++;
            }
        }
        cout << flipCount << endl;
    }
    return 0;
}