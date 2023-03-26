#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    long long int k;
    cin >> n >> k;
    vector<int> a(n+1);
    vector<int> pos(n+1);
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        pos[a[i]] = i;
    }
    int i;
    int j = 1;
    for(i = n; k-- && i >= 1; i--) {
        if(a[j] == i) {
            cout << i << " ";
            k++;
        }else {
            cout << i << " ";
            a[pos[i]] = a[j];
            pos[a[j]] = pos[i];
        }
        j++;
    }
    // j++;
    while(j <= n) {
        cout << a[j] << " ";
        j++;
    }

    cout << endl;
    return 0;
}