#include <iostream>
using namespace std;
int  main() {
    int t;
    cin >> t;
    while(t--) {
        long long int k;
        int d1, d2;
        cin >> k >> d1 >> d2;
        long long int sum{(d1+d2)};
        bool entry{true};
        int checkSum{0};
        int currDigit{0};
        int i;
        for(i = 3; i <= k && entry; i++) {
            currDigit = sum%10;
            if(i>3 && i<=7){
                // cout << "CHECKSUM : " << currDigit << endl;
                checkSum += currDigit;
            }
            if(i >= 7) entry = false;
            sum += currDigit;
        }
        // cout << "INITIAL sum : " << sum << endl;
        if(i <= k && !entry) {
            i--;
            // cout << checkSum << ", i : " << i << ", k-i : " << k-i << endl;
            if((k-i)/4 != 0){
                sum += (checkSum*((k-i)/4));
            }
            i = (k-i)%4;
            // cout << "Later i : " << i << endl;
            while(i > 0){
                int temp = sum%10;
                // cout << "Later : " << temp << endl;
                sum += temp;
                i--;
            }
        }
        // cout << sum << endl;
        if(sum%3 == 0 )
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}