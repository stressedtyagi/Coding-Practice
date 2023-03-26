#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    int w = 1;
    for(int i = 1; i < s.length(); i++) {
        if(isupper(s[i]))
            w++;
    }
    cout << w << endl;
    return 0;
}