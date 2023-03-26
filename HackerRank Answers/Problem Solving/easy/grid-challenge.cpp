#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<vector<char>> a(n,vector<char> (n));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }

        for(int i = 0; i < n; i++) {
            sort(a[i].begin(), a[i].end());
        }

        bool flag{true};
        for(int i = 0; i < n-1 && flag; i++) {
            for(int j = 0; j < n; j++) {
                if(a[i][j] > a[i+1][j]) {
                    flag = false;
                    break;
                }
            }
        }

        if(flag)    cout << "YES" << endl;
        else    cout << "NO" << endl;
    }
    return 0;
}