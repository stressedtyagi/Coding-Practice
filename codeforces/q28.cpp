#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int solve{0};
    while(n--) {
        int count{0};
        for(int i = 0; i < 3; i++) {
            int x;
            cin >> x;
            if(x == 1) count++;
        }
        if(count >= 2) solve++;
    }
    cout << solve << endl;
    return 0;
}