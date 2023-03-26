#include <iostream>
#include <math.h>
using namespace std;

void radixSort(int*,int);
// when using AUX space 
// void countSort(int*,int*,int,int);

// when not using AUX space 
void countSort(int*,int,int);


int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        
        // Write your code here
        radixSort(a,n);
        // end

        for(int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0; 
}

// Without using AUX Space
void radixSort(int *a, int n) {
    int max{a[0]};
    for(int i = 0; i < n; i++)
        max = a[i] > max ? a[i] : max;

    for(int i = 1; max/i > 0; i *= 10) {
        countSort(a,n,i);
    }
}

void countSort(int *a, int n, int exp) {
    int c[10]{0}, b[n+1]{0};

    for(int i = 0; i < n; i++) {
        c[(a[i]/exp)%10]++;
    }
    for(int i = 1; i < 10; i++) {
        c[i] += c[i-1];
    }
    for(int i = n-1; i >= 0; i--) {
        b[c[(a[i]/exp)%10]] = a[i];
        c[(a[i]/exp)%10]--;
    }
    for(int i = 0; i < n; i++) {
        a[i] = b[i+1];
    }
}



// USING AUX Space - O(n)
// void radixSort(int *a, int n) {
//     int maxLength{1};
//     for(int i = 0; i < n; i++)
//         maxLength = log10(a[i]) + 1 > maxLength ? log10(a[i])+1 : maxLength;
//     int temp[n]{0};
//     for(int i = 0; i < n; i++)
//         temp[i] = a[i];
//     int ten{1};
//     for(int i = 0; i < maxLength; i++) {
//         for(int i = 0; i < n; i++) {
//             temp[i] /= ten;
//         }
//         ten = 10;
//         countSort(a,temp,n,10);
//     }
// }

// void countSort(int *a, int *temp, int n, int k) {
//     int c[k]{0}, b[n+1]{0};
//     int b1[n+1]{0};
//     for(int i = 0; i < n; i++) {
//         c[temp[i]%10]++;
//     }
//     for(int i = 1; i < k; i++) {
//         c[i] += c[i-1];
//     }
//     for(int i = n-1; i >= 0; i--) {
//         b[c[temp[i]%10]] = a[i];
//         b1[c[temp[i]%10]] = temp[i];
//         c[temp[i]%10]--;
//     }
//     for(int i = 0; i < n; i++) {
//         a[i] = b[i+1];
//         temp[i] = b1[i+1];
//     }
// }
