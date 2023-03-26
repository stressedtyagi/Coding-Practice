#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v(101);
    int max = 0;
    for (size_t i = 0; i < n; i++) {
        int x;
        cin >> x;
        v[x]++;
        if(v[x] > max ){
            max = v[x];
        }
    }
    cout << n - max << endl;
    return 0;
}