#include <bits/stdc++.h>
using namespace std;

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    int result = -1;
    for(int i = 0; i < keyboards.size(); ++i){
        for(int j = 0; j < drives.size(); ++j){
            if(keyboards[i] + drives[j] <= b){
                if (keyboards[i] + drives[j] > result) {
                    result = keyboards[i] + drives[j];
                }
            } 
        }
    }

    return result;
}

int main(){
    int b,n,m;
    cin >> b >> n >> m;
    vector<int> keyboards(n);
    for(size_t i = 0 ; i < n; ++i){
        cin >> keyboards[i];
    }
    vector<int> drives(m);
    for(size_t i = 0 ; i < m; ++i){
        cin >> drives[i];
    }
    int result = getMoneySpent(keyboards,drives,b);
    cout << result << endl;
}