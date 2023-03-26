#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n;
    cin >> n;
    int *a = new int[n];
    double sum{0.0};
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += (a[i]/100.0);
    }
    cout << setprecision(12) << (sum/n)*100 << endl;

    return 0;
}