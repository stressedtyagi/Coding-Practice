#include <bits/stdc++.h>
using namespace std;
void solve(unsigned n,vector<int> &ar){
    unsigned pair = 0;
    int sum = 1;
    sort(ar.begin(), ar.end());
    for(int i = 0; i < ar.size(); i++){
        if(ar[i] == ar[i+1])
            sum++;
        else {
            pair += (sum/2);
            sum = 1;
        }
    }
    cout << pair << endl;
}

int main(){
    unsigned n;
    cin >> n;

    vector<int> arr(n);
    for(size_t i = 0 ; i < n; ++i){
        cin >> arr[i];
    }
    solve(n,arr);
}