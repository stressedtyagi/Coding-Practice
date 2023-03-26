#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main() {
    int q;
    cin >> q;
    while(q--) {
        string s;
        cin >> s;
        bool flag{false};
        long long int x;
        long unsigned int n{s.length()};
        for(int i = 0; i <= n/2 && !flag; i++) {
            // cout << i << "-" << endl;
            if(i+1 < n && s[i+1] != '0'){
                long long int firstNumber = stoll(s.substr(0,i+1));
                x = firstNumber;
                string nextNum{s[i+1]};
                for(int j = i+1; j < n; j++) {
                    // cout << "Initial : " << stoll(nextNum) << " - " << firstNumber << endl;
                    while(stoll(nextNum)-firstNumber < 1 && j < n){
                        if(j+1 < n)
                            nextNum += s[j+1];
                        j++;
                    }
                    if(stoll(nextNum) - firstNumber == 1){
                        // cout << "AC(before) : " << stoll(nextNum) << " - " << firstNumber << endl;
                        firstNumber = stoll(nextNum);
                        if(j+1 < n){
                            if(s[j+1] != '0')
                                nextNum = s[j+1];
                            else {
                                flag = false;
                                break;
                            }
                        }
                        // cout << "AC(after) : " << stoll(nextNum) << " - " << firstNumber << endl;
                        flag = true;
                    }else {
                        flag = false;
                        break;
                    }
                }
            }
        }
        
        if(flag) {
            cout << "YES " << x << endl;
        }else {
            cout << "NO" << endl;
        }
    }
}