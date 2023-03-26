#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int deletions{0};
        for(int i = 0; i < s.length()-1; i++) {
            if(s[i] == s[i+1])
                deletions++;
        }
        cout << deletions << endl;
    }
    return 0;
}