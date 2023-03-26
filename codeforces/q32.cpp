#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int maxIndex{1};
    int maxTurn{INT8_MIN};
    for(int i = 0; i < n; i++) {
        int tempTurn = (a[i]%m == 0 ? floor(a[i]/m) : floor(a[i]/m) + 1); 
        if(maxTurn <= tempTurn){
            maxTurn = tempTurn;
            maxIndex = i+1;
        }
    }
    cout << maxIndex << endl;
    return 0;
}