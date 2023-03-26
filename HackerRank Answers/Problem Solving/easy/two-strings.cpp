#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        string p1,p2;
        cin >> p1 >> p2;
        vector<int> v1(26), v2(26);
        for(int i = 0; i < p1.length(); i++)
            v1[p1[i]-97] = 1;
        for(int i = 0; i < p2.length(); i++)
            v2[p2[i]-97] = 1;
        bool flag = false;
        for(int i = 0; i < 26 && !flag; i++)
            if(v1[i] && v2[i])
                flag = true;
        if(flag)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
}