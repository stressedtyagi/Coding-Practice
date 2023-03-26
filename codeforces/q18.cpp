#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n]{0};
    for(int i = 0; i < n; i++) cin >> a[i];
    int worst{a[0]}, best{a[0]}, changes{0};
    for(int i = 1; i < n; i++) {
        if(a[i] > best) {
            best = a[i];
            changes++;
        }else if(a[i] < worst) {
            worst = a[i];
            changes++;
        }
    }
    cout << changes << endl;
    return 0;
}