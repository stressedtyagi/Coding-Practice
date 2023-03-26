#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    int sum{0};
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    if(sum%2 == 0){
        int cost{0};
        for(int i = 0; i < n; i++) {
            if(a[i]%2) {
                a[i]++;
                a[i+1]++;
                cost += 2;
            }
        }
        cout << cost << endl;
    }else {
        cout << "NO" << endl;
    }
    return 0;
}