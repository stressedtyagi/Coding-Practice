#include <iostream>
#include <vector>
using namespace std;
int main() {
    short n;
    cin >> n;
    vector<int> lDoor, rDoor;
    int lOne{0}, rOne{0};
    for(int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;  // 1 - open, 0 - closed
        lDoor.push_back(l);
        rDoor.push_back(r);
        if(l)   lOne++;
        if(r)   rOne++;
    }
    cout << (lOne < n-lOne ? lOne : n-lOne) + (rOne < n-rOne ? rOne : n-rOne) << endl;

    return 0;
}