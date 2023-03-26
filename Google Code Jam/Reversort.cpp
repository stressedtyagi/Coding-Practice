#include <bits/stdc++.h>
using namespace std;
void reverse(vector<int>& v, int l, int u) {
    for(int i = 0; i <= (u-l)/2; i++) {
        // cout << endl << "Swapping : " << v[l+i] << " " << v[u-i];
        swap(v[l+i],v[u-i]);
    }
}

// void print(vector<int>& v) {
//     cout << endl;
//     for(int i = 0; i < v.size(); i++) {
//         cout << v[i] << " ";
//     }
// }
int main() {
    int t;
    cin >> t;
    for(int k = 1; k <= t; k++) {
        cout << "Case #" << k << ": ";
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];

        // print(v);
        int cost{0};    
        for(int i = 0; i < n-1; i++) {
            int minPos = i, minEle = v[i];
            for(int j = i+1; j < n; j++) {
                if(v[j] < minEle) {
                    minEle = v[j];
                    minPos = j;
                }
            }
            // cout << endl << i << " " << minPos;
            reverse(v,i,minPos);
            // print(v);
            cost += minPos-i+1;
        }
        // cout << endl;
        cout << cost << endl;
    }
    return 0;
}