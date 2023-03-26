#include <iostream>
using namespace std;
int main() {
    int oneI{0};
    int oneJ{0};
    
    for (int i = 1; i <= 5; i++) {
        unsigned x;
        for (int j = 1; j <= 5; j++){
            cin >> x;   
            if(x == 1) {
                oneI = i;
                oneJ = j;
            }
        }
    }
    cout << abs(3-oneI) + abs(3-oneJ);
    return 0;    
}