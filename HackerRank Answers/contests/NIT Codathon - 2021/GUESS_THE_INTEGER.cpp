#include <bits/stdc++.h>
using namespace std;
int main () {
    short t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char range;
        long long num;
        long long int minLeft = INT64_MAX, maxRight = INT64_MIN;
        bool rFlag = false, lFlag = false;
        for(int i = 0; i < n; i++){
            cin >> range >> num;
            if (range == 'L') {
                lFlag = true;
                if(num < minLeft)
                    minLeft = num;
            }else if (range == 'R') {
                rFlag = true;
                if(num > maxRight)
                    maxRight = num;
            }
        }
        long long int temp = minLeft - maxRight;
        if(temp > 1 && rFlag && lFlag)
            cout << temp -1 << endl;
        else 
            cout << -1 << endl;
    }
    return 0;
}