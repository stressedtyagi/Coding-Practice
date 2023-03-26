#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long int> v(n);
        for(int i = 0; i < n ; i++) cin >> v[i];
        long long int largestSum{INT64_MIN};
        sort(v.begin(),v.end());
        largestSum = (v[n-1] - v[0])*2;
        cout << largestSum << endl;
    }
    return 0;
}
// long long int findSum(vector<long long>& v, int x, int y, int z) {
//     return (abs(v[x]-v[y]) + abs(v[y]-v[z]) + abs(v[z]-v[x]));
// }

// int main() {
//     int t;
//     cin >> t;
//     while(t--) {
//         int n;
//         cin >> n;
//         vector<long long int> v(n);
//         for(int i = 0; i < n ; i++) cin >> v[i];

//         long long int largestSum{INT64_MIN};
//         for(int i = 0; i < n; i++) {
//             for(int j = i+1; j < n; j++) {
//                 for(int k = j+1; k < n; k++) {
//                     if(i != j && j != k && i != k){
//                         long long int temp = findSum(v,i,j,k);
//                         if(temp > largestSum)   largestSum = temp;
//                     }
//                 }
//             }
//         }
//         cout << largestSum << endl;
//     }
//     return 0;
// }