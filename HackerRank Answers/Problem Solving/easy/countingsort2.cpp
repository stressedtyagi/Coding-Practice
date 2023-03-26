#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> b(n);
    int a[100]{0};
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        a[v[i]]++;
    }
    for(int i = 1; i < 100; i++) {
        a[i] += a[i-1];
    }
    for(int i = n-1; i >=0; i--) {
        b[a[v[i]]-1] = v[i];
        a[v[i]]--;
    }
    for(int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}