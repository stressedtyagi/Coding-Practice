#include <bits/stdc++.h>
using namespace std;
long solve(vector<string> upRight)
{
    int n = int(upRight.size());
    for (auto it : upRight)
    {
        cout << it << endl;
        string n1 = it.substr(0, it.find(" "));
        string n2 = it.substr(1, it.find(" "));
        // cout << n1 << " " << n2 << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<string> upRight(n);
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        upRight[i] = s;
    }
    cout << solve(upRight) << endl;
    return 0;
}