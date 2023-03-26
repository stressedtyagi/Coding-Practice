#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    string s;
    cin >> n >> s;
    int charToAdd = 0;
    bool uFlag, lFlag, sFlag, dFlag;
    uFlag = lFlag = sFlag = dFlag = false;
    for(int i = 0; i < n && (!uFlag || !lFlag || !sFlag || !dFlag); i++){
        if(s[i] >= 65 && s[i] <= 90)
            uFlag = true;
        if(s[i] >= 97 && s[i] <= 122)
            lFlag = true;
        if(s[i] >= 48 && s[i] <= 57)
            dFlag = true;
        if(s[i] == '!' || s[i] == '@' || s[i] == '#' || s[i] == '$' || s[i] == '%' || s[i] == '^' || s[i] == '&' || s[i] == '*' || s[i] == '(' || s[i] == ')' || s[i] == '-' || s[i] == '+')
            sFlag = true;
    }

    if(!uFlag)
        charToAdd++;
    if(!lFlag)
        charToAdd++;
    if(!dFlag)
        charToAdd++;
    if(!sFlag)
        charToAdd++;

    if(n+charToAdd < 6)
        charToAdd += 6-(n+charToAdd);

    cout << charToAdd << endl;
    return 0;
}