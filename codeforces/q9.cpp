#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int countLucky{0};
    bool flag{false};
    for(size_t i = 0; s[i] != '\0'; i++){
        int num = s[i] - 48;
        if(num == 7 || num == 4)
            countLucky++;
    }
    if(countLucky == 7 || countLucky == 4)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
}