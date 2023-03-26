#include <iostream>
using namespace std;
int main() {
    string n;
    cin >> n;
    bool flag{true};
    int x;
    while(flag) {
        flag = false;
        x = stoi(n) + 1;
        string xString = to_string(x);
        for(int i = 0; i < xString.length() && !flag; i++){
            for(int j = 0; j < xString.length(); j++){
                if(xString[i] == xString[j] && i != j){
                    flag = true;
                    break;
                }
            }
        }
        
        if(flag){
            n = xString;
        }
    }    
    cout << x << endl;
}