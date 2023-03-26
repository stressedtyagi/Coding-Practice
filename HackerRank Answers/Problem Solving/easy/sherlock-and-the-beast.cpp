#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        bool flag{false};
        int fiveCount, threeCount;
        for(int i = n; i >= 0 && !flag; i--) {
            fiveCount = i;
            threeCount = n-i;
            if(fiveCount%3 == 0 && threeCount%5 == 0) flag = true;
        }
        if(flag){
            for(int i = 0; i < fiveCount; i++) cout << "5";
            for(int i = 0; i < n-fiveCount; i++) cout << "3";
            cout << endl;
        }else {
            cout << "-1" << endl;
        }
    }
    return 0;
}