#include <bits/stdc++.h>
using namespace std;

int solve(const int n, vector<int> &a){
    int max_len = 2;
    
    for(int i : a){
        vector<int> temp;
        // cout << "["<< i << "] = {";
        int this_max = i;
        int this_min = i;
        for(int j : a){
            if(abs(this_max-j) <= 1 && abs(this_min-j) <= 1){
                // cout << " " << j << "(" << this_max << ")" << "{" << this_max-j << "}";
                temp.push_back(j);
                if(j > this_max)
                    this_max = j;            
                if(j < this_min)
                    this_min = j;            
            }
        }
        // cout <<  "}" << endl;
        if (temp.size() >= max_len) {
            max_len = temp.size();
        }
        temp.clear();
    }
    return max_len;
}

int main() {
    unsigned n;
    cin >> n;

    vector<int> ar(n);
    for (size_t i = 0; i < n; i++) {
        cin >> ar[i];
    }
    
    int result = solve(n,ar);
    cout << result << endl;
    return 0;
}