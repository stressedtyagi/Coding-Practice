#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string b;
        cin >> n >> b;
        vector<int> color(26,0);
        int gapCount{0};
        bool errorFlag{false};
        for(int i = 0; i < n; i++) {
            if(b[i] >= 65 && b[i] <= 90)    color[b[i]-65]++;
            else if(b[i] == '_') gapCount++;
            if(b[i] != b[i-1] && b[i] != b[i+1])    errorFlag = true;
        }
        vector<int>::iterator it = find(color.begin(),color.end(),1);
        if(it != color.end()) {
            cout << "NO" << endl;
        }else {
            if(errorFlag) {
                if(gapCount) {
                    cout << "YES" << endl;
                }else {
                    cout << "NO" << endl;
                }
            }else {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}