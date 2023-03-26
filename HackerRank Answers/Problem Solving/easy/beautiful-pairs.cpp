#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    int count=0;
    bool flag1=false;
    bool flag2=false;
    unordered_map<int, int> mp;
    for(int i=0; i<a.size(); i++) mp[a[i]]++;
    for(int i=0; i<b.size(); i++) {
        if(mp[b[i]]) {
            mp[b[i]]--;
            count++;
        }
        else {
            flag1=true;
        }      
    }
    for(auto i : mp) {
        if(i.second) {
            flag2=true;
            break;
        }
    }
    if(flag1 && flag2) cout << count+1 << endl;
    else if(!flag1 && !flag2) cout << count-1 << endl;
    else cout << count << endl;
    
    return 0;
}