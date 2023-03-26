#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<string> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), [](string i, string j) -> bool{
        if(i.length() == j.length())    return i<j;
        return i.length() < j.length();
    });
    for(int i = 0; i < n; i++) {
        cout << v[i] << endl;
    }

    return 0;
}