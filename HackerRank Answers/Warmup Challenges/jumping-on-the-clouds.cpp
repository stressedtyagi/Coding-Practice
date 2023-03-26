#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int jump = 0;
    for(int i = 0; i < n; i++){
        if(v[i+2] == 0 && i+2 < n){
            // cout << "JUMP from " << i << "to" << i+2 << endl;
            jump++;
            i++;
        }else if(v[i+1] == 0 && i+1 < n){
            // cout << "JUMP from " << i << "to" << i+1 << endl;
            jump++;
        }
    }
    cout << jump << endl;
}