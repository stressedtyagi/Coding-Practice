// K-Goodness String
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        int gScore{0};
        for(int i = 0; i < n/2; i++) {
            if(s[i] != s[n-i-1]) {
                gScore++;
            }
        }
        if(gScore == k)
            cout << "Case #" << i+1 << ": 0" << endl;
        else 
            cout << "Case #" << i+1 << ": " << abs(k-gScore) << endl;       
    }
    return 0;
}