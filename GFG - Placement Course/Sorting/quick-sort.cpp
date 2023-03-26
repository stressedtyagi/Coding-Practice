#include <iostream>
using namespace std;

void quickSort(int*,int,int);
int partition(int*,int,int);

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        
        // Write your code here
        quickSort(a,0,n-1);

        for(int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0; 
}

void quickSort(int *a, int l, int h) {
    if(l < h) {
        int par = partition(a,l,h);
        quickSort(a,l,par);
        quickSort(a,par+1,h);
    }
}

int partition(int *a, int l, int h) {
    // My Algo ~ to hovers partition - call quickSort(a,l,pivot) - does not ensure pivot is at its correct position
    // int pivot{a[h]};
    // int i{l},j{h-1};
    // while(i < j) {
    //     if(a[i] > pivot) {
    //         swap(a[j],a[i]);
    //         j--;
    //     }else {
    //         i++;
    //     }
    // }
    // if(a[i] > pivot) {
    //     swap(a[i],a[h]);
    // }else {
    //     swap(a[i+1],a[h]);
    // }
    // return j;

    // Lomuto Partition - - call quickSort(a,l,pivot-1) since it ensure that pivot is at it correct place
    // int pivot{a[h]};
    // int i{l-1};
    // for(int j = l; j < h; j++) {
    //     if(a[j] < pivot){
    //         i++;
    //         swap(a[i],a[j]);
    //     }
    // }
    // swap(a[i+1],a[h]);
    // return i+1;

    // Hover's Partition - call quickSort(a,l,pivot) - does not ensure pivot is at its correct position
    int pivot{a[l]};
    int i{l-1}, j{h+1};
    while(true) {
        do {
            i++;
        } while (a[i] < pivot);
        do {
            j--;
        } while (a[j] > pivot);
        if(i >= j) return j;
        swap(a[i],a[j]);
    }
}