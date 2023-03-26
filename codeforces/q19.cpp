#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n]{0}, b[n]{0}; // a - enter, b - exit
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i];
    int passInTrain{b[0]}, miniCount{b[0]};
    for(int i = 1; i < n; i++) {
        passInTrain -= (a[i]-b[i]);
        if(passInTrain > miniCount) miniCount = passInTrain;
    }
    cout << miniCount << endl;

    return 0;
}