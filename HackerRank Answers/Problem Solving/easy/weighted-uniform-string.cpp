#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n;
    cin >> n;

    int maxWeight[26]{0};
    for(int i = 0; i < s.length(); i++) {
        char c{s[i]};
        int pos{s[i]-97};
        int currentEleWeight{pos+1};
        int temp{currentEleWeight};
        while(s[i+1] == c){
            temp += currentEleWeight;
            i++;
        }
        if(maxWeight[pos] < temp) maxWeight[pos] = temp;
    }
    while(n--) {
        int x;
        cin >> x;
        bool flag{true};
        for(int i = 0; i < 26 && flag; i++) {
            if(maxWeight[i] == x) {
                cout << "Yes" << endl;
                flag = false;
            }else if(maxWeight[i] > x && maxWeight[i]) {
                if(x % (i+1) == 0){
                    cout << "Yes" << endl;
                    flag = false;
                }
            }
        }
        if(flag)    cout << "No" << endl;
    }
    return 0;
}