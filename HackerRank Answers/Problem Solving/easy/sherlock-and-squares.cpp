#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        int l,u;
        cin >> l >> u;
        int temp = sqrt(l);
        int square = 0;
        if(temp*temp < l){
            temp++;
        }
        while (temp*temp <= u){
            square++;
            temp++;
        }
        cout << square << endl;
    }
    
    return 0;
}