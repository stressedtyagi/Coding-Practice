#include <iostream>
#include <string>
using namespace std;
int main() {
    int n, k;
    string s;
    cin >> n >> s >> k;
    
    for (int i = 0; i < n; i++) {
        if(s[i] >= 65 && s[i] <= 90) {
            s[i] = 65 + ((s[i] + k - 65)%26);
        }else if(s[i] >= 97 && s[i] <= 122) {
            s[i] = 97 + ((s[i] + k - 97)%26);
        }
    }
    cout << s << endl;

    return 0;
}