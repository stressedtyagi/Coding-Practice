#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void inserstionSort(vector<int>::iterator,vector<int>::iterator);
void bucketSort(int*,int,int);

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    // Write Code here
    int k;
    cin >> k;
    bucketSort(a,n,k);
    // end

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0; 
}

void bucketSort(int *a, int n, int k) {
    int min{0}, max{a[0]};
    for(int i = 0; i < n; i++)
        if(a[i] > max)
            max = a[i];
    max++;  // Important
    vector<int> buckets[k];
    for(int i = 0; i < n; i++) {
        int bucketIndex = (k*a[i])/max;
        buckets[bucketIndex].push_back(a[i]);
    }

    for(int i = 0; i < k; i++) {
        inserstionSort(buckets[i].begin(),buckets[i].end());       
    }

    int l{0};
    for(int i = 0; i < k; i++) {
        for(int j = 0; j < buckets[i].size(); j++) {
            a[l++] = buckets[i][j];
        }
    }
}

void inserstionSort(vector<int>::iterator start, vector<int>::iterator end) {
    for(auto i = start; i != end; i++) {
        int pivot = *i;
        auto j = i - 1;
        for( ; j >= start; j--) {
            if(*j > pivot) {
                *(j+1) = *j;
            }else {
                break;
            }
        }
        *(j+1) = pivot;
    }
}