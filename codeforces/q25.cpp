#include <iostream>
using namespace std;
int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int toastDrink{l*k/nl};
    int toastSlices{c*d};
    int toastSalt{p/np};
    cout << min(toastDrink,min(toastSalt,toastSlices))/n << endl;
    return 0;
}