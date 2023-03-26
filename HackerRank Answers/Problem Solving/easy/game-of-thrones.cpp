#include <iostream>
#include <vector>
using namespace std;
int main() {
    cin.tie(NULL);
    string s;
    cin >> s;
    int l = s.length();
    vector<int> alpha(26);
    for(int i = 0; i < l; i++){
        alpha[s[i]-97]++;
    }

    int flag = true;
    int oddCount = 0;
    for(int i = 0; i < alpha.size() && flag; i++){
        if(l%2 == 0 && alpha[i]){
            if(alpha[i]%2 != 0)
                flag = false;
        }else if (alpha[i]){
            if(oddCount > 1)
                flag = false;
            if(alpha[i]%2 != 0)
                oddCount++;
        }
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}