#include <iostream>
#include <math.h>
#define ll long long int
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int c;
        cin >> c;
        
        double power{log2(c)};
        int d{0};
        if(floor(power) == ceil(power)) d = power+1;
        else d = ceil(power);
        ll UPPERLIMIT{pow(2,d)-1};
        // cout << "d : " << d << " , upperLimit : " << UPPERLIMIT;
           
        ll maxProduct = (UPPERLIMIT/2)*((UPPERLIMIT/2)^c);
        // int count{0};
        // for(ll i = UPPERLIMIT; i >= UPPERLIMIT/2; i--) {
        //     ll currProduct{(i^c)*i};
        //     count++;
        //     if(i != c && currProduct > maxProduct) {
        //         maxProduct = currProduct;
        //         if((i^c) >= UPPERLIMIT/2)
        //             break;
        //     }
        // }
        // cout << ", Itterations :  " << count << endl;   
        cout << maxProduct << endl;
    }
    return 0;
}