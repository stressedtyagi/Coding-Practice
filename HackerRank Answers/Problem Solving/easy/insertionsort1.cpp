#include <iostream>
using namespace std;
void PRINT(int a[], int n){
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main() {
    unsigned n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int temp{a[n-1]};
    int i;
    for(i = n-2; i >= 0; i--){
        if(a[i] >= temp)
            a[i+1] = a[i];
        else if(a[i] < temp){
            a[i+1] = temp;
            PRINT(a,n);
            break;
        }
        PRINT(a,n);
    }
    if(i < 0){
        a[0] = temp;
        PRINT(a,n);
    }
}