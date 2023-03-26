#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int v[n]{0};
    int a[100]{0};
    for(int i = 0; i < n; i++) {
        string s;
        cin >> v[i] >> s;
        a[v[i]]++;
    }
    for(int i = 1; i < 100; i++) {
        a[i] += a[i-1];
    }
    for(int i = 0; i < 100; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}