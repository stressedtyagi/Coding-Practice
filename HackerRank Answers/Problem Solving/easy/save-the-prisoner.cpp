#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned t;
    cin >> t;
    while(t--){
        int n, m, s;
        cin >> n >> m >> s;
        if(m < n-s+1){
            cout << s+m-1 << endl;
        }else if (m > n-s+1){
            int remaining_sweets = m-(n-s+1);
            if(remaining_sweets > n){
                int final_pos = remaining_sweets%n;
                if(final_pos)
                    cout << final_pos << endl;
                else 
                    cout << n << endl;
            }else if(remaining_sweets < n) {
                cout << remaining_sweets << endl;
            }else {
                cout << n << endl;    
            }
        }else {
            cout << n << endl;
        }
    }
    return 0;
}