#include <bits/stdc++.h>
using namespace std;
void solve(const unsigned n, vector<int> p){
    vector<int> result(n+1);
    for(int i = 1; i <= n; i++){
        result[p[p[i]]] = i;
    }
    for(int i = 1; i < n+1; i++){
        cout << result[i] << endl;
    }
}

int main(){
    unsigned n;
    cin >> n;
    vector<int> p(n+1);
    for(int i = 1; i <= n; i++){
        cin >> p[i];
    }

    solve(n,p);
    return 0;
}