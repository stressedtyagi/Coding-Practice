#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long int
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<ll> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(),v.end());
        int index{0};
        while(v[index] == 1 && index < n) {
            cout << v[index] << " ";
            index++;
        }
        if(index == n-2 && v[n-2] == 2 && v[n-1] == 3)
            cout << "2 3 ";
        else {
            for(int i = n-1; i >= index; --i) {
                cout << v[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}