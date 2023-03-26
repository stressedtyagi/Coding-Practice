#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if (s[i] == s[i+1]) {
            s.erase(i,2);
            if(i>0)
                i = i-2;
            else
                i = i-1;
        }
    }
    if(s.length()){
        cout << s << endl;
    }else {
        cout << "Empty String" << endl;
    }
   
    return 0;
}