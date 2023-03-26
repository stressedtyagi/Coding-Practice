#include "iostream"
#include <vector>
using namespace std;
int main() {
    string s1,s2;
    cin >> s1 >> s2;
    vector<int> v1(26), v2(26);
    for(int i = 0; i < s1.length(); i++)
        v1[s1[i]-97]++;
    for(int i = 0; i < s2.length(); i++)
        v2[s2[i]-97]++;
    
    int common{0};
    for(int i = 0; i < 26; i++) {
        if(v1[i] && v2[i]){
            common += min(v1[i],v2[i]);
        }
    }
    cout << s1.length() + s2.length() - 2*common << endl;
    return 0;
}