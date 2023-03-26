#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    int upper{0}, lower{0};
    int n = s.length();
    for(int i = 0; i < n; i++){
        if(isupper(s[i]))
            upper++;
        else if (islower(s[i]))
            lower++;
    }
    bool flag = upper > lower ? true : false;
    for(int i = 0; i < n; i++){
        if(flag && islower(s[i]))
            cout << (char)toupper(s[i]);
        else if(!flag && isupper(s[i]))
            cout << (char)tolower(s[i]);
        else
            cout << s[i];
    }
    cout << endl;
    return 0;
}