#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<string> vStr(n);
    vector<int> b(n);
    vector<string> bStr(n);
    int a[100]{0};
    for(int i = 0; i < n; i++) {
        cin >> v[i] >> vStr[i];
        a[v[i]]++;
    }
    for(int i = 1; i < 100; i++) {
        a[i] += a[i-1];
    }
    for(int i = n-1; i >=0; i--) {
        b[a[v[i]]-1] = v[i];
        if(i >= 0 && i < n/2)
            bStr[a[v[i]]-1] = '-';
        else 
            bStr[a[v[i]]-1] = vStr[i];
        a[v[i]]--;
    }
    for(int i = 0; i < n; i++) {
        cout << bStr[i] << " ";
    }
    cout << endl;
    return 0;
}