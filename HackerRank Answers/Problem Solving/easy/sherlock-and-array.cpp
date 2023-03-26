#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int *a{new int[n]};
        for(int i = 0; i < n; i++) cin >> a[i];
        bool checkFlag{false};

        int *rSum{new int[n]};
        int *lSum{new int[n]};
        int tempSum{0};
        for(int i = 0; i < n; i++) {
            lSum[i] = tempSum;
            tempSum += a[i];
        }
        tempSum = 0;
        for(int i = n-1; i >= 0; i--) {
            rSum[i] = tempSum;
            tempSum += a[i];
        }
        for(int i = 0; i < n && !checkFlag; i++){
            if(lSum[i] == rSum[i])
                checkFlag = true;
        }
        if(checkFlag)   cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}