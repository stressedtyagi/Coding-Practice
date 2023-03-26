#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
int main () {
    string s;
    getline(cin, s);

    unordered_set<char> us;
    if (s.length() < 26) {
        cout << "not pangram" << endl;
        return 0;
    }
    for(auto c : s){
        if(c != ' '){
            us.insert(tolower(c));
        }
    }
    
    if(us.size() == 26)
        cout << "pangram" << endl;
    else 
        cout << "not pangram" << endl;
    return 0;
}
    // vector<int> alphabets(26);
    // for (int i = 0; i < s.length(); i++) {
    //     if(isupper(s[i]))
    //         alphabets[s[i] - 65]  = 1;   
    //     if(islower(s[i]))
    //         alphabets[s[i] - 97]  = 1;   
    // }

    // bool paraFlag = true;
    // for(int i = 0; i < 26 && paraFlag; i++){
    //     if(alphabets[i] != 1)
    //         paraFlag = false;
    // }
    
    // if(paraFlag)