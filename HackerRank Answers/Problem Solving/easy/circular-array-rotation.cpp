#include <bits/stdc++.h>
std::vector<int> solve(int n, int k, std::vector<int>& v){
    std::vector<int> temp;
    int i = 1;
    while (k--) {
        if(n-i < 0){
            i = 1;
        }
        temp.push_back(v[n-i]);
        i++;
    }
    
    std::vector<int> final;
    if(temp.size() > n){
        for(size_t i = temp.size(); i >= n; i--) {
            final.push_back(temp[i-1]);
        }
    }else {
        for(size_t i = temp.size(); i >= 1; i--) {
            final.push_back(temp[i-1]);
        }
        int i = 0;
        while(final.size() != n){
            final.push_back(v[i++]);
        }
    }
    
    return final;
}

int main(void){
    int n,k,q;
    std::cin >> n >> k >> q;
    std::vector<int> v(n);
    for(size_t i = 0 ; i < n; i++){
        std::cin >> v[i];
    }
    std::vector<int>vf = solve(n,k,v);
    while(q--){
        int x;
        std::cin>>x;
        std::cout << vf[x] << std::endl;
    }
    return 0;
}