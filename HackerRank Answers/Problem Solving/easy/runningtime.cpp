#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int shift{0};
    for (int i = 1; i < n; i++){
        int temp = a[i];
        int j = i-1;
        while(j >=0 && a[j] > temp){
            shift++;
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
        
    }
    cout << shift << endl;  
    return 0;
}