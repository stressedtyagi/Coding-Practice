#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int m, n;   
        cin >> m >> n;
        int *a = new int[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++) {
            int sum{a[i]};
            bool flag{false};
            int j{0};
            for(j = 0; j < n; j++){
                if(sum + a[j] == m && j!=i){
                    flag = true;
                    break;
                }
            }
            if(flag){
                cout << i+1 << " " <<  j+1 << endl;
                break;
            }
        }
    }
    return 0;
}