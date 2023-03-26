#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,k;
        cin >> n >> k;  // baskets(n), foodies(k)
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        vector<int> cummSum(n);
        cummSum[0] = v[0];
        for(int i = 1; i < n; i++) {
            cummSum[i] = v[i] + cummSum[i-1];
        }
        int maxEleInSet{n-k+1};
        for(int i = 1; i <= maxEleInSet; i++) {
            
        }
    } 
    return 0;
}