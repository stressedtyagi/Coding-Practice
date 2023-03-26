#include <bits/stdc++.h>
using namespace std;


int reverse(int x){
    int rev = 0;
    int rem = 0;
    int i = to_string(x).length();
    while(x){
        rem = x%10;
        x /= 10;
        rev += rem*pow(10,--i);
    }
    return rev;
}

int beautifulDays(int i, int j, int k) {
    int bdays = 0;
    while(i <= j){
        int rev = reverse(i);
        if(abs(i - rev)%k == 0){
            bdays++;
        }
        i++;
    }

    return bdays;
}

int main() {
    int i,j,k;
    cin >> i >> j >> k;
    int result = beautifulDays(i, j, k);
    cout << result << "\n";

    return 0;
}