#include <iostream>
using namespace std;

void countSort(int*,int,int);    // int* - array, int - size of array, int - range of elements
void countSortMinMax(int*,int,int,int); // int* - array, int - size of array, int - min val, int - max val

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        
        // Write your code here
        // int k = 100;
        // countSort(a,n,k);
        int min, max;
        cin >> min >> max;
        countSortMinMax(a,n,min,max);
        // end

        for(int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0; 
}

void countSort(int *a, int n, int k) {
    int c[k]{0}, b[n+1]{0};
    for(int i = 0; i < n; i++) {
        c[a[i]]++;
    }
    for(int i = 1; i < k; i++) {
        c[i] += c[i-1];
    }
    for(int i = n-1; i >= 0; i--) {
        b[c[a[i]]] = a[i];
        c[a[i]]--;
    }

    for(int i = 0; i < n; i++) {
        a[i] = b[i+1];
    }
}

void countSortMinMax(int *a, int n, int min, int max) {
    int k = max-min+1; // range of elements
    int c[k]{0}, b[n]{0};
    for(int i = 0; i < n; i++) {
        c[a[i]-min]++;
    }
    for(int i = 1; i < k; i++) {
        c[i] += c[i-1];
    }

    for(int i = n-1; i >= 0; i--) {
        b[c[a[i]-min]-1] = a[i];
        c[a[i]-min]--;
    }   

    for(int i = 0; i < n; i++) {
        a[i] = b[i];
    }
}