#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int c[n];
    for(int i = 0; i < n; i++) {
        cin >> c[i];
    }
    sort(c,c+n);
    long int min{0};
    long long int two{pow(2,n-1)};
    for(int i = 0; i < n; i++) {
        min += (c[i] * two);
        two /= 2;
    }
    cout << min << endl;
    return 0;
}