#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int countZero{0};
        for(int i = 5; n/i >= 1; i *= 5) {
            countZero += (n/i);
        }
        cout << countZero << endl;
    }
    return 0;
}