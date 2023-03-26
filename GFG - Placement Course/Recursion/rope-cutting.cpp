#include <iostream>
using namespace std;
void findCut(int n, int a, int b, int c, int x, int &pi)
{
    if (n < 0)
        return;
    if (n == 0)
        pi = max(pi, x);
    findCut(n - a, a, b, c, x + 1, pi), findCut(n - b, a, b, c, x + 1, pi), findCut(n - c, a, b, c, x + 1, pi);
}
int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int peices{-1};
    findCut(n, a, b, c, 0, peices);
    cout << peices << endl;
    return 0;
}

// Time: O(3^n)