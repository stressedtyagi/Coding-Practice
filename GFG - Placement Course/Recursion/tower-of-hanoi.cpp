#include <iostream>
using namespace std;
void toh(int n, char src, char aux, char dest)
{
    if (n == 1)
    {
        cout << "[Move] : 1 -> " << src << " to " << dest << endl;
        return;
    }
    toh(n - 1, src, dest, aux);
    cout << "[Move] : " << n << " -> " << src << " to " << dest << endl;
    toh(n - 1, aux, src, dest);
}
int main()
{
    int n;
    cout << "Number of disks: ";
    cin >> n;
    toh(n, 'A', 'B', 'C');
    return 0;
}

// Time: O(2^n)
// Number of movements: T(n) = 2T(n-1) + 1 = (2^n - 1)