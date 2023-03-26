#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    int minIndex{0}, maxIndex{0}, minEle{INT32_MAX}, maxEle{INT32_MIN};
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] <= minEle){
            minEle = a[i];
            minIndex = i;
        }
        if(a[i] > maxEle) {
            maxEle = a[i];
            maxIndex = i;
        }
    }
    int cost = maxIndex + abs(n - minIndex - 1);
    if(maxEle != minEle){
        if(maxIndex > minIndex){
            cout << cost - 1 << endl;
        }else {
            cout << cost << endl;
        }
    }else {
            cout << 0 << endl;
    }
        
    return 0;
}