#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    string str[n]{""};
    for(int i = 0; i < n; i++) cin >> str[i];
    for(int i = 1; i < n-1; i++) {
        string s{str[i]};
        for(int j = 1; j < n-1; j++) {
            if((s[j]-48 > s[j-1]-48) && (s[j]-48 > s[j+1]-48) && (s[j]-48 > str[i-1][j]-48) &&(s[j]-48 > str[i+1][j]-48))
                str[i][j]='X';
        }
    }

    for(int i = 0; i < n; i++) cout << str[i] << endl;
    return 0;
}