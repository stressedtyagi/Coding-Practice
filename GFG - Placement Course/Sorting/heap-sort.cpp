#include <iostream>
using namespace std;

void buildHeap(int*,int);
void maxHeapify(int*,int,int);
void heapSort(int*,int);

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        
        // Write your code here
        heapSort(a,n);
        // end

        for(int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0; 
}

void heapSort(int *a, int n) {
    buildHeap(a,n);
    for(int i = n-1; i >= 0; --i) {
        swap(a[i],a[0]);
        maxHeapify(a,i,0);
    }
}

void buildHeap(int *a, int n) {
    for(int i = n/2 - 1; i >= 0; --i) {
        maxHeapify(a,n,i);
    }
}

void maxHeapify(int *a, int n, int i) {
    int largest{i}, left{2*i+1}, right{2*i+2};
    if(left > n && right > n) return;
    if(left < n && a[left] > a[largest]) largest = left; 
    if(right < n && a[right] > a[largest]) largest = right;
    if(largest != i) {
        swap(a[largest],a[i]);
        maxHeapify(a,n,largest);
    }
}