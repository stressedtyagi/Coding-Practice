#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<short> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int total{accumulate(a.begin(),a.end(),0)};
    int totalFriends{n+1};
    int count{0};
    for(int i = 1; i <= 5; i++) {
        int currentFriend{(total+i)%totalFriends};
        if(currentFriend != 1) count++;
    }
    cout << count << endl;
    return 0;
}
