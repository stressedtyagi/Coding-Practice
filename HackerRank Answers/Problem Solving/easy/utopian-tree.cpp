#include <bits/stdc++.h>
using namespace std;

int utopianTree(int n) {
    int height = 1;
    for(int i = 1; i <= n; i++){
        if(i%2 == 0){
            height += 1;
        }else {
            height *= 2;
        }
    }
    return height;
}

int main() {
    int t;
    cin >> t;

    int n;
    while(t--){
        cin >> n;
        int result = utopianTree(n);
        cout << result << endl;
    }
    return 0;
}
