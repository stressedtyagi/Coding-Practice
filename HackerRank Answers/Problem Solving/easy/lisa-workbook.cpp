#include <iostream>
#include <vector>
using namespace std;

void solve(int n, int k, vector<int> &v){
    int page_no = 1;
    int special = 0;
    for (int i = 0; i < n; i++) {
        for(int j = 1; j <= v[i]; j++){
            if ((j-1)%k == 0 && j != 1){
                page_no++;
            }
            if (j == page_no)
                special++;
        }
        page_no++;
    }
    cout << special << endl;
}

int main() {
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    solve(n,k,v);

    return 0;
}


/*
        int problems = v[i];
        int start = 1;
        int end = (v[i]-k) > 0 ? k : v[i];

        while (v[i] > 0) {
            v[i] -= k;
            bool flag = true;
            for (size_t i = start; i <= end && flag; i++){
                if (i == page_no){
                    special++;
                    flag = !flag;
                }
            }
            start = end+1;
            end = (v[i]-k) > 0 ? end + k : end + v[i];
            page_no++;
        }
        if (v[i] <= 0){
            for (size_t i = start; i <= end; i++){
                if (i == page_no){
                    special++;
                }
            }
            page_no++;            
        }        
*/