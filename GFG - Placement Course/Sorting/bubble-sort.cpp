#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    int comparisons{0};
    bool checkFlag{true};
    for(int i = 0; i < n-1 && checkFlag; i++) {
        checkFlag = false;
        for(int j = 0; j < n-i-1; j++) {
            if(comparisons++ && a[j] > a[j+1]) {
                swap(a[j],a[j+1]);
                checkFlag = true;
            }
        }
    }
    cout << "Comparisions : " << comparisons << endl;
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0; 
}