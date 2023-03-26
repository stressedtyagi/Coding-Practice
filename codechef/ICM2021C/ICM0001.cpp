#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> temp(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            temp[i] = a[i];
        }
        sort(temp.begin(),temp.end());
        
        auto smallestPos = a.begin();
        for(auto i = a.end()-1; i != a.begin(); i--) {
            if(*i == temp[0]) {
                smallestPos = i;
                if(*(i-1) != temp[0])
                    break;
            }
        }
        if(smallestPos != a.begin() && *(smallestPos-1) == temp[0])
            smallestPos--;
        auto j = smallestPos;
        bool checkFlag{true};
        for(auto i = temp.begin(); i != temp.end(); i++) {
            if(j == a.end()) {
                j = a.begin();
            }
            // cout << *j << " == " << *i << endl;
            if(*j != *i){
                checkFlag = false;
                break;
            }
            j++;
        }
        if(checkFlag) {
            cout << "YES" << endl;
            if(smallestPos != a.begin())
                cout << "1" << endl;
            else
                cout << "0" << endl;
        }else { 
            cout << "NO" << endl;
        }
    }
}