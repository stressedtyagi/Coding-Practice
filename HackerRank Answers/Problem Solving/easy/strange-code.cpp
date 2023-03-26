#include <iostream>
using namespace std;
int main() {
    long long int t;
    cin >> t;
    long long int x{3}, i{1};
    while(t > x && t-i > x-1){
        i += x; 
        x *= 2;
    }
    cout << x - (t-i) << endl;;
    return 0;
}