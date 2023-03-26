#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    if(!(a ^ b)) {
        cout << a << " is equal to " << b << endl;
    }else {
        cout << a << " is not equal to " << b << endl;
    }
    return 0;
}