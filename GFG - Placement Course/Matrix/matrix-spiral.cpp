#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int top{0},right{m-1},bottom{n-1},left{0};
    if(m == 1) {
        for(int i = 0; i < n; i++)  
            cout << a[i][m-1] << " ";
    }else if (n == 1) {
        for(int j = 0; j < m; j++) 
            cout << a[n-1][j] << " ";
    }else {
        while(top <= right && left <= bottom) {
            for(int j = top; j <= right; j++) 
                cout << a[top][j] << " ";
            for(int i = top+1; i <= bottom; i++) 
                cout << a[i][right] << " ";
            for(int j = right-1; j >= left; j--) 
                cout << a[bottom][j] << " ";
            for(int i = bottom-1; i > top; i--) 
                cout << a[i][left] << " ";
            top++;
            left++;
            right--;
            bottom--;   
        }
    }
    cout << endl;
    return 0;
}