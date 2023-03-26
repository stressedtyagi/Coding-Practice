#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, d;
    cin >> n >> d;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int triplet = 0;
    for (size_t i = 0; i < n; i++) {
        bool flag_1 = true;
        size_t j;
        for (j = i+1; j < n && flag_1; j++) {
            if(v[j] - v[i] == d){
                flag_1 = false;
            }
        }
        bool flag_2 = true;
        for (size_t k = j; k < n && flag_2; k++){
            if(v[k] - v[j-1] == d){
                flag_2 = false;
            }
        }
        if (!flag_1 && !flag_2) {
            triplet++;
        }
    }
    cout << triplet << endl;
    
    return 0;
}