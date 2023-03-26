#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
int main() {
    int n;
    string s;
    cin >> n >> s;
    if(n == 1){
        cout << "0" << endl;
        return 0;        
    }
    unordered_set<char> uSet;
    for (int i = 0; i < n; i++) {
        uSet.insert(s[i]);
    }
    
    int maxLength = 0;
    unordered_set<char>::iterator i;
    unordered_set<char>::iterator j;
    for (i = uSet.begin(); i != uSet.end(); i++) {
       for (j = i; j != uSet.end(); j++) {
            char letter_1 = *i;
            char letter_2 = *j;
            string temp = "";
            for (int k = 0; k < n; k++) {
                if (s[k] == letter_1 || s[k] == letter_2) {
                    temp += s[k];
                }
            }
            
            bool flag = true;
            for (int l = 0; l < temp.length() - 1 && flag; l++){
                if (temp[l] == temp[l+1]){
                    flag = false;
                }
            }

            if(flag) {
                if(temp.length() > maxLength)
                    maxLength = temp.length();
            }
        }   
    }
    cout << maxLength << endl;
        
    return 0;
}