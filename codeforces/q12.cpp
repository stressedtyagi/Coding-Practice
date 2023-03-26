#include <iostream>
using namespace std;
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    for(int i = 0; i < s1.length(); i++){
        cout << ((s1[i]-48) ^ (s2[i] - 48));
    }
    cout << endl;
    return 0;
}