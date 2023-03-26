#include "iostream"
using namespace std;
int main() {
    int n;
    cin >> n;
    long *a = new long(n);    
    long sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    cout << sum;
    return 0;
}
