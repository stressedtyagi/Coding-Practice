#include <bits/stdc++.h>
using namespace std;
void solve(unsigned n,const vector<int> &ar){
    vector<int> type_count(5);
    unsigned id = 0;
    int highest_count = 0;
    for(auto x : ar){
        type_count[x-1]++;
        if(type_count[x-1] > highest_count){
            highest_count = type_count[x-1];
            id = x-1;
        }else if(highest_count == type_count[x-1]){
            id = id > x-1 ? x-1:id;
        }
    }
    
    cout << id+1 << endl;
}

int main(){
    int n;
    cin >> n;
        
    vector<int> arr(n);
    for(size_t i = 0 ; i < n; ++i){
        cin >> arr[i];
    }
    solve(n,arr);
}