#include <bits/stdc++.h>
using namespace std;
int main(){
    short n,k;
    cin >> n >> k;
    vector<int> v(n);
    for (size_t i = 0; i < n; i++) {
        cin >> v[i];
    }
    int jump = 0, thunder = 0;
    for (size_t i = (k%n); i < n; i = (i+k)%n) {
        if(i == 0){
            if(v[i] == 1) {
                thunder++;
            }
            jump++;
            break;
        }else {
            if(v[i] == 1) {
                thunder++;
            }
            jump++;
        }
    }
    cout << 100 - jump - (thunder*2) << endl;
    
    return 0;
}