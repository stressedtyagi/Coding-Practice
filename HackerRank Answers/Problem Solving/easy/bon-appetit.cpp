#include <bits/stdc++.h>
using namespace std;
void solve(int n, int k,int bill, vector<int> &ar){
    int sum = 0;
    for (size_t i = 0; i < ar.size(); i++){
        if(i != k){
            sum += ar[i];
        }
    }
    int bill_ana = sum/2;
    if(bill_ana == bill)
        cout << "Bon Appetit" << endl;
    else 
        cout << bill - bill_ana << endl;
    
}

int main(){
    int n, k;   //n number of items, k item anaa did not eat
    cin >> n >> k;
    vector<int> arr(n);
    for(size_t i = 0 ; i < n; ++i){
        cin >> arr[i];
    }
    int bill;
    cin >> bill;
    solve(n,k,bill,arr);
}