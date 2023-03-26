#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
#define ll long long int
int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;
        vector<ll> factors;
        for(int i = 1; i <= sqrt(n); i++) {
            if(n%i == 0) {
                if(n/i == i)
                    factors.push_back(i);
                else 
                    factors.push_back(i), factors.push_back(n/i);
            }
        }
        ll finalProduct{1};
        for(auto &i : factors) {
            if(i%m == 0) {
                finalProduct = (finalProduct*i)%1000000007; 
            }
        }
        cout << finalProduct << endl;
    }
    
    return 0;
}