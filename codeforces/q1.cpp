#include <iostream>
using namespace std;
int main() {
    unsigned n;
    cin >> n;
    int sumI = 0;
    int sumJ = 0;
    int sumK = 0;
    while (n--) {
        int i, j ,k;
        cin >> i >> j >> k;
        sumI += i;
        sumJ += j;
        sumK += k;
    }
    if (!sumI && !sumI && !sumK)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
    
}