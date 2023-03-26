// Naive Partition algorithm for quick sort partition function
// make all elements in left of pivot smaller than pivot and right larger than pivot.
// PIVOT can be any element in the array
#include <iostream>
using namespace std;

void naivePartition(int*,int,int);

int main() {
    int n, m;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
        
    int p;
    cin >> p;
    naivePartition(a,n,p);

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0; 
}

void naivePartition(int* a, int n, int p) {
    // MY Algo
    // int temp = a[p];
    // int low[n]{0},high[n]{0},j{0},k{0};
    // for(int i = 0; i < n; i++) {
    //     if(i != p && a[i] < temp)   low[j++] = a[i];
    //     else if(i != p && a[i] > temp)   high[k++] = a[i];
    // }
    // a[j] = temp;
    // for(int i = 0; i < j; i++) {
    //     a[i] = low[i];
    // }    
    // for(int i = 0; i < k; i++) {
    //     a[i+j+1] = high[i];
    // }

    // GFG Algo
    int t[n], index{0};
    for(int i = 0; i < n; i++) {
        if(a[i] < a[p]) {
            t[index++] = a[i];
        }
    }
    t[index++] = a[p];
    for(int i = 0; i < n; i++) {
        if(a[i] > a[p]) {
            t[index++] = a[i];
        }
    }
    for(int i = 0; i < n; i++) {
        a[i] = t[i];
    }
}