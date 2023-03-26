#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;

        int count{0};
        for(int i = 1; i <= n; i++) {
            for(int j = i+1; j <= n; j++) {
                int x = (m%i)%j;
                int y = (m%j)%i;
                cout << "(" << i << "," << j << ") : ";
                cout << x << " -- " << y  << " : " << (x==y ? "true" : "false")<< endl;
                if(x == y)
                    count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     for(uint64_t n = 1; n <= 64; n++) {
//         cout << n << " -> ";
//         uint64_t count{0};
//         for(uint64_t i = 0; i <= pow(2,n)-1; i++) {
//             if((i ^ (i+1)) == ((i+2)^(i+3))){
//                 // cout << "X : " << i << endl;
//                 // cout << "X+1 : " << i+1 << endl;
//                 // cout << "X+2 : " << i+2 << endl;
//                 // cout << "X+3 : " << i+3 << endl;
//                 // cout << "X ^ X+1 : " << (i ^ (i+1)) << endl;
//                 // cout << "X+2 ^ X+3 : " << ((i+2) ^ (i+3)) << endl;
//                 // cout << "----------------------------------------------" << endl;
//                 count++;
//             }
//         }
//         cout << count << endl;
//     }
// }