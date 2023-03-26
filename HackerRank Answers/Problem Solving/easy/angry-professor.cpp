#include <bits/stdc++.h>
using namespace std;

string angryProfessor(int k, vector<int>& a) {
    string cancel = "YES";
    int attend = 0;
    for(int x : a){
        if(x <= 0)
            attend++;
    }
    if(attend >= k)
        cancel = "NO";
    return cancel;
}

int main() {
    unsigned t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n ; i++){
            cin >> a[i];
        }
        string result = angryProfessor(k,a);
        cout << result << endl;
    }
    return 0;
}
