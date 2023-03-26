#include <bits/stdc++.h>
using namespace std;
void solve(int n){
    if(n <= 1917){
        cout << (n%4 == 0 ? "12.09."+to_string(n):"13.09."+to_string(n)) << endl;
    } else if (n == 1918) {
        cout << "26.09.1918" << endl;
    }else {
        cout << ((n%400 == 0 || (n%4 == 0 && n%100 != 0)) ? "12.09."+to_string(n):"13.09."+to_string(n)) << endl;
    }
}

int main(){
    int n;
    cin >> n;
    solve(n);
}