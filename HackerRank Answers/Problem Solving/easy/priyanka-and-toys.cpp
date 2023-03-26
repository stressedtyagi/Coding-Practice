#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    int w[n];
    for(int i = 0; i < n; i++)  cin >> w[i];
    sort(w,w+n);    // 1 2 3 7 12 14 21 21
    int container{0};
    int lowest{w[0]};
    for(int i = 1; i < n; i++) {
        if(w[i] > lowest + 4) {
            container++;
            lowest = w[i];
        }
    }
    cout << container+1 << endl;
    return 0;
}