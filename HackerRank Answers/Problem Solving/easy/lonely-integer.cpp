#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)  cin >> a[i];
    sort(a,a+n);
    int curr{a[0]};
    int count{1};
    for(int i = 1; i < n; i++) {
        if(a[i] == curr){
            count++;
        }else {
            if(count == 1){
                break;
            }else {
                curr = a[i];
                count = 1;
            }
        }
    }
    cout << curr << endl;
    return 0;
}