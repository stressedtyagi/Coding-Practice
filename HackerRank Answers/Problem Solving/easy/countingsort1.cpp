#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    int arr[100]{0};
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        arr[v[i]]++;
    }
    for(int i = 0; i < 100; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}