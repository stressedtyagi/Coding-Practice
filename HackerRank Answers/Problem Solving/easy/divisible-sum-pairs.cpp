#include <bits/stdc++.h>
using namespace std;
void solve(unsigned n, unsigned k,vector<int> &ar){
    vector<vector<char>> travel(n , vector<char> (n, 'N'));
    unsigned count = 0;
    for (size_t i = 0; i < n; i++){
        for (size_t j = 0; j < n; j++) {
            if(travel[i][j] == 'N'){
                travel[i][j] = 'V';
                travel[j][i] = 'V';
                if((ar[i] + ar[j])%k == 0 && j != i){
                    count++;
                }
            }
        }
    }
    
    cout << count << endl;
}

int main(){
    unsigned n, k;
    cin >> n >> k;
        
    vector<int> arr(n);
    for(size_t i = 0 ; i < n; ++i){
        cin >> arr[i];
    }
    solve(n,k,arr);
}