// Maximum Area Histogram Problem
#include <iostream>
#include <stack>
#include <algorithm>
#include <numeric>
using namespace std;
void INPUT(int a[], int n) {
    for(int i = 0; i < n; i++) cin >> a[i];
}
void OUTPUT(int a[], int n) {
    for(int i = 0; i < n; i++) cout << a[i] << " ";
}

int solve(int[],int);

int main() {
    int n;
    cin >> n;
    int a[n];
    INPUT(a,n);

    // CODE
    int rainWaterArea = solve(a,n);
    cout << "Max Area : " << rainWaterArea << endl;
    // END

    // OUTPUT(r,n);
    // cout << endl;
    return 0;
}

int solve(int a[], int n) {
    int water[n]{0}, maxL[n]{0}, maxR[n]{0};
    maxL[0] = a[0];
    maxR[n-1] = a[n-1];
    for(int i = 1; i < n; i++) {
        maxL[i] = max(a[i],maxL[i-1]);
    }
    for(int i = n-2; i >= 0; i--) {
        maxR[i] = max(a[i],maxR[i+1]);
        
    }
    for(int i = 0; i < n; i++) {
        water[i] = min(maxR[i],maxL[i]) - a[i];
        cout << min(maxR[i],maxL[i]) << "-" << a[i] << endl;
    }
    return accumulate(water,water+n,0);
}
