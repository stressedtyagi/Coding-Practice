#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<long long> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(),v.end());
    long long int maximum{INT64_MIN};
    for(int i = 0; i < n; i++){
        v[i] = v[i] * (n-i);
        if(v[i] > maximum)
            maximum = v[i];
    }
    
    cout << maximum << endl;
    return 0;
}