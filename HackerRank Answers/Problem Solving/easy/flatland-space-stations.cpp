#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int a[n]{0};
    int ss[m],j{0};
    for(int i = 0; i < m; i++) {
        int x;
        cin >>  x;
        ss[i] = x; 
        a[x] = 1;
    }

    int maxDis{0};
    for(int i = 0; i < n; i++) {
        if(a[i] == 0) {
            int minDis{INT32_MAX};
            for(int j = 0; j < m; j++) {
                if(abs(i - ss[j]) < minDis) {
                    minDis = abs(i-ss[j]);
                }
            }
            if(minDis > maxDis) maxDis = minDis;
        }
    }
    cout << maxDis << endl;
    return 0;
}