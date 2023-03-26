#include <iostream>
#include <string.h>

using namespace std;
int main() {
    string s;
    cin >> s;
    string final{""};
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '-'){
            if(s[i+1] == '.')
                cout << 1;
            if(s[i+1] == '-')
                cout << 2;
            i++;
        }else {
            cout << 0;
        }
    }
    return 0;
}