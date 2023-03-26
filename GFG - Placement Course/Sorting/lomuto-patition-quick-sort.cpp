// lomuto Partition algorithm for quick sort partition function
// make all elements in left of pivot smaller than pivot and right larger than pivot.
#include <iostream>
using namespace std;

void partition(int*,int,int);

int main() {
    int n, m;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
        
    int p;
    cin >> p;
    partition(a,n,p);

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0; 
}

void partition(int* a, int n, int p) {
    // MY Algo - for any element as pivot
    // int i{0},j{n-2};
    // swap(a[p],a[n-1]);
    // p = n-1;
    // while(i < j) {
    //     if(a[i] > a[p]) {
    //         swap(a[i],a[j]);
    //         j--;
    //     }else {
    //         i++;
    //     }
    // }
    // if(a[i] > a[p]) {
    //     swap(a[p],a[i]);
    // }else {
    //     swap(a[p],a[i+1]);
    // }

    // GFG Algo - Considering Pivot is last element 
    // int i{-1};
    // for(int j = 0; j < n-1; j++) {
    //     if(a[j] < a[p]) {
    //         i++;
    //         swap(a[i],a[j]);
    //     }
    // }
    // swap(a[i+1],a[n-1]);

    // GFG Algo - Considering Pivot can be any element - p
    int i{-1};
    swap(a[p],a[n-1]);
    p = n-1;
    for(int j = 0; j < n-1; j++) {
        if(a[j] < a[p]) {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[n-1]);

}