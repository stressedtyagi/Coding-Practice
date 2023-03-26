#include <bits/stdc++.h>
using namespace std;

void cutTheSticks(vector<int>& arr) {
    while (arr.size()) {
        cout << arr.size() << endl;
        sort(arr.begin(),arr.end(), [](int a, int b ) {
            return a > b;
        });
        int small = arr[arr.size()-1];
        for (size_t i = arr.size()-1; arr[i] == small; i--) {
            arr.pop_back();
        }
        for (size_t i = 0; i < arr.size(); i++) {
            arr[i] -= small;
        }
    }
    
}

int main(){
    short n;
    cin >> n;
    vector<int> v(n);
    for (size_t i = 0; i < n; i++) {
        cin >> v[i];
    }
    cutTheSticks(v);
    return 0;
}