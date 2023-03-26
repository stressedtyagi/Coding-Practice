#include <iostream>
using namespace std;
int main() {
    string s1,s2,result;
    cin >> s1 >> s2 >> result;
    int count[26]{0};
    for(char c : s1) {
        count[c-65]++;
    }
    for(char c : s2) {
        count[c-65]++;
    }
    for(char c : result) {
        count[c-65]--;
    }
    for(int i : count) {
        if(i != 0) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}