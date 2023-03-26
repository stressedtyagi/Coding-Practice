#include <iostream>
using namespace std;
int main() {
    int n,h,x;  // x hours left, t[n] different time zone, h hrs needed
    cin >> n >> h >> x;
    int t[n];
    bool ifPossible{false};
    for(int i = 0; i < n; i++)  {
        cin >> t[i];
        if(t[i]+x >= h) ifPossible = true;
    }
    if(ifPossible)  cout << "YES" << endl;
    else    cout << "NO" << endl;
    return 0;
}