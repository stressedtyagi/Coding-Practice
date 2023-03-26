#include <iostream>
#include <set>
using namespace std;
void solve(int a[], int b[], int n)
{
    set<int> s;
    b[0] = -1;
    s.insert(a[0]);
    for (int i = 1; i < n; i++)
    {
        set<int>::iterator it = s.lower_bound(a[i]);
        if (it != s.end())
            b[i] = *it;
        else
            b[i] = -1;
        s.insert(a[i]);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // solution
    int res[n];
    solve(arr, res, n);
    // end

    cout << "Output : ";
    for (auto i : res)
        cout << i << " ";
    cout << endl;
    return 0;
}