#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n+1]{0};
    int pos[n+1]{0};
    for(int i = 1; i <= n; i++) { 
        cin >> a[i];
        pos[a[i]] = i;
    }
    int q;
    cin >> q;
    long long int c1{0},c2{0};
    while(q--) {
        int x;
        cin >> x;
        c1 += pos[x];
        c2 += n - pos[x] + 1;
    }
    cout << c1 << " " << c2 << endl;
}