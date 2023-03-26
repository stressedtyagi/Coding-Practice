#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int v,n,pos;
    cin >> v >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(v == arr[i])
            pos = i;
    }
    cout << pos << endl;
    return 0;
}