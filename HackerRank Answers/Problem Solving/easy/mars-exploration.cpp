#include <iostream>
#include <string>
using namespace std;
int main () {
    string s;
    cin >> s;
    int nm = s.length()/3;
    int alt = 0;
    for (size_t i = 0; i < nm; i++) {
        if (s[i*3] != 'S') {
            alt++;
        }
        if (s[i*3+1] != 'O') {
            alt++;
        }
        if (s[i*3+2] != 'S') {
            alt++;
        }
    }
    cout << alt << endl;
    return 0;
}