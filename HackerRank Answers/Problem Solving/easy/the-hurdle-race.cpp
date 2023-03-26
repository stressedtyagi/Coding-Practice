#include <bits/stdc++.h>
using namespace std;

int solve(const int n,const int k, vector<int> &a){
    int dose = 0;
    int max_height = k;
    for(int x : a){
        if(max_height < x){
            max_height = x;
        }
    }
    if (max_height > k){
        dose = max_height - k;
    }
    
    return dose;
}

int main() {
    unsigned n,k;
    cin >> n >> k;

    vector<int> ar(n);
    for (size_t i = 0; i < n; i++) {
        cin >> ar[i];
    }
    
    int result = solve(n,k,ar);
    cout << result << endl;
    return 0;
}