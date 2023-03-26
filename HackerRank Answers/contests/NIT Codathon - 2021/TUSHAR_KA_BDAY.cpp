#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        int oddEle{0};
        vector<int> cumm(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            if(v[i] & 1)
                oddEle++;
            cumm[i] = oddEle;
        }
        long long count{0};
        
        // long long subSet = pow(2,n) - 1;
        // for(int i = 0; i < n; i++){
        //     long long temp{v[i]};
        //     for(int j = i+1; j < n; j++){
        //         temp ^= v[j];
        //         if(temp%2 == 0)
        //             count++;
        //     }
        // }


        cout << count + n - oddEle << endl;
    }
    return 0;
}