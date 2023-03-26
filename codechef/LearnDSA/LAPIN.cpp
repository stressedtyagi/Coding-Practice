#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int n{s.length()};
        int mid = n/2;
        vector<int> freq1(26);
        for(int i = 0; i < mid; i++){
            freq1[s[i]-97]++;
        }
        mid = n%2 ? mid+1 : mid;
        vector<int> freq2(26);
        for(int i = mid; i < n; i++){
            freq2[s[i]-97]++;
        }
        bool flag = true;
        for(int i = 0; i < 26 && flag; i++){
            if(freq1[i] != freq2[i]){
                flag = false;
            }
        }
        if(flag)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}