#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int32_t v[10001];
        int32_t fastCar{1};
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int32_t slowest{v[0]};
        for(int i = 1; i < n; i++) {
            if(v[i] < slowest){
                fastCar++;
                slowest = v[i];
            }
        }
        cout << fastCar << endl;
    }
    return 0;
}