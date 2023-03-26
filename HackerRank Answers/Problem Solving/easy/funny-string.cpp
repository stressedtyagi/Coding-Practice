#include <iostream>
using namespace std;
int main() {
    int q;
    cin >> q;
    while(q--) {
        string s;
        cin >> s;
        bool flag = true;
        int n = s.length();
        for (int i = 0; i < n - 1 && flag; i++) {
            int nSum = abs(s[i] - s[i+1]);
            int rSum = abs(s[n-i-1] - s[n-i-2]);
            if(rSum != nSum)
                flag = false;
        }
        if(flag)
            cout << "Funny" << endl;
        else 
            cout << "Not Funny" << endl;
    }
    return 0;
}