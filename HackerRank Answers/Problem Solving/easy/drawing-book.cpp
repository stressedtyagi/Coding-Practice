#include <bits/stdc++.h>
using namespace std;
void solve(int n, int p){
    int turn = 0;
    if(p-1 < n-p) {
        if(p%2 == 0) {
            turn = ceil((p-1)/2.0);
        }else {
            turn = (p-1)/2;
        }
    }else if (p-1 >= n-p){
        if(n%2 != 0){
            if(p%2 == 0){
                turn = floor((n-p)/2.0);
            }else {
                turn = (n-p)/2;
            }            
        }else {
            if(p%2 == 0){
                turn = (n-p)/2;
            }else {
                turn = ceil((n-p)/2.0);
            }
        }
    }
    cout << turn << endl;
}

int main(){
    int n,p;
    cin >> n >> p;        
    solve(n,p);
}