#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        string s;
        cin >> n >> k;
        cin >> s;
        vector<int> a(k);
        for (int i = 0; i < k; i++)
            cin >> a[i];
        int dist{0};
        // opp charge - 1 dist
        // same charge - 2 dist
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i - 1] == s[i])
                dist += 2;
            else
                dist += 1;
        }
        for (int i = 0; i < k; i++)
        {
            int pos = a[i] - 1;
            if (s[pos] == '1')
            {
                if (pos - 1 >= 0)
                {
                    if (s[pos - 1] == s[pos])
                        dist -= 1;
                    else
                        dist += 1;
                }
                if (pos + 1 < s.length())
                {
                    if (s[pos + 1] == s[pos])
                        dist -= 1;
                    else
                        dist += 1;
                }

                s[pos] = '0';
            }
            else if (s[pos] == '0')
            {
                if (pos - 1 >= 0)
                {
                    if (s[pos - 1] == s[pos])
                        dist -= 1;
                    else
                        dist += 1;
                }
                if (pos + 1 < s.length())
                {
                    if (s[pos + 1] == s[pos])
                        dist -= 1;
                    else
                        dist += 1;
                }

                s[pos] = '1';
            }
            cout << dist << endl;
        }
    }
    return 0;
}