#include <bits/stdc++.h>
using namespace std;
vector<int> solve(int p, int q){
    vector<int> kep;
    for (size_t i = p; i <= q; i++) {
        int length = to_string(i).length();
        long long int square = i*i;
        string split_r(to_string(square).substr(to_string(square).length() - length, length));
        string split_l(to_string(square).substr(0, to_string(square).length() - split_r.length()));
        long long int l,r;
        std::istringstream(split_l) >> l; 
        std::istringstream(split_r) >> r; 
        r = stoi(split_r);
        if(l + r == i){
            kep.push_back(i);
        }
    }
    return kep;
}
int main() {
    int p, q;
    cin >> p >> q;
    vector<int> kepler = solve(p,q);
    if(kepler.size() > 0){
        for (size_t i = 0; i < kepler.size(); i++) {
            cout << kepler[i] << " ";
        }
        cout << endl;
    }else {
        cout << "INVALID RANGE" << endl;
    }
    return 0;
}