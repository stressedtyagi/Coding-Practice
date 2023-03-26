#include <iostream>
#include <cmath>
using namespace std;
int findComp(int x) {
    int n = floor(log2(x))+1;
    return ((1 << n)-1) ^ x;
}
int main() {
    int l,r;
    cin >> l >> r;
    int maxXor{INT32_MIN};
    for(int i = l; i <= r; i++) {
        for(int j = i+1; j <= r; j++) {
            if((i^j) > maxXor)
                maxXor = i^j;
        }
    }

    cout << maxXor << endl;
    return 0;
}