#include <iostream>
#include <math.h>
using namespace std;
#define ll long long int
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int sum{0};
        while(s.length() > 1) {
            sum = 0;
            for(int i = 0; i < s.length(); i++) {
                int rem = s[i] - 48;
                sum += rem;
            }
            s = to_string(sum);
        }
        cout << sum << endl;
    }
    return 0;
}