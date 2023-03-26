#include <iostream>
using namespace std;
void merge(long int a[], int l, int m, int r) {
    int leftSize = m - l + 1;
    int rightSize = r - m;
    int tempLeft[leftSize], tempRight[rightSize];
    
    for(int i = 0; i < leftSize; i++)
        tempLeft[i] = a[l + i];
    for(int i = 0; i < rightSize; i++)
        tempRight[i] = a[m + 1 + i];
    
    int i = 0;
    int j = 0;
    int k = l;


    while(i < leftSize && j < rightSize) {
        if(tempLeft[i] <= tempRight[j]) {
            a[k++] = tempLeft[i++]; 
        }else {
            a[k++] = tempRight[j++]; 
        }
    }
    while(i < leftSize) {
        a[k++] = tempLeft[i++];
    }
    while(j < rightSize) {
        a[k++] = tempRight[j++];
    }
}
void mergeSort(long int a[], int l, int r){
    if(l < r){
        int mid = (l+r-1)/2;
        mergeSort(a,l,mid);
        mergeSort(a,mid+1, r);
        merge(a,l,mid,r);
    }
}
void print(long int a[], int n) {
    cout << "a : ";
    for(int i =0 ; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    long int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    mergeSort(a, 0, n-1);
    int k = 0;
    int final[n*2];
    long int smallestDiff{INT64_MAX};
    for(int i = 1; i < n; i++) {
        int diff = a[i] - a[i-1];
        if(diff < smallestDiff){
            smallestDiff = diff;
            k = 0;
        }
        if (diff == smallestDiff){
            final[k] = a[i-1];
            final[k+1] = a[i];
            k = k + 2;;
        }
    }
    for(int i = 0; i < k; i++) {
        cout << final[i] << " ";
    }
    cout << endl;
    return 0;
}