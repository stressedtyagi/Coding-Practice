#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }


    int min_dis = INT_MAX;
    for(int i = 0; i < n; i++) {
        bool flag = true;
        for(int j = i+1; j < n && flag; j++) {
            if (v[i] == v[j]) {
                min_dis = min(min_dis, j-i);
                flag = !flag;
            }
        }
    }
    if(min_dis != INT_MAX)
        cout << min_dis << endl;
    else
        cout << "-1" << endl;
    return 0;
}