#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    short largestDivisor{1};
    for(int i = 2 ; i <= 10; i++) {
        if(n%i == 0){
            largestDivisor = i;
        }
    }
    cout << largestDivisor << endl;
    return 0;
}