#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t;
    cin >> t;
    while(t--) {
        double k1, k2, k3, v;
        cin >> k1 >> k2 >> k3 >> v;
        double finalSpeed = (double) (k1*k2*k3*v);
        double finalTime = 100.00/finalSpeed;
        float value = (int)(finalTime * 100 + .5);
        float roundedTime = (float)value / 100;
        if(roundedTime < 9.58f && roundedTime != 9.58f)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}