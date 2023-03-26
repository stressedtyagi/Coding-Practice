#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        unsigned int n{s.length()};
        int cost{0};
        for(int i = 0; i < n/2.; i++) {
            if(s[i] != s[n-i-1])
                cost += abs(s[i] - s[n-i-1]);
        }
        cout << cost << endl;
    }
    return 0;
}