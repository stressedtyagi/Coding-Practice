#include <iostream>
using namespace std;
int main() {
    unsigned t;
    cin >> t;
    while(t--) {
        unsigned int n;
        cin >> n;
        while(n%10 == 0){
          n /= 10;  
        } 
        while(n){
            cout << n%10;
            n /= 10;
        }
        cout << endl;
    }
    return 0;
}