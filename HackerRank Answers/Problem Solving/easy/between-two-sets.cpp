#include "iostream"
using namespace std;
int main() {
    int n, m, count = 0;
    cin >> n >> m;
    int* a = new int(n);
    int* b = new int(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    for (int i = a[n-1]; i <= b[m-1]; i++) {
        bool FIRST_ARRAY_FACTOR = true;        
        for (int j = 0; j < n; j++) {
            if(i%a[j] != 0) {
                FIRST_ARRAY_FACTOR = false;
                break;
            }
        }
        bool SECOND_ARRAY_FACTOR = true;
        if (FIRST_ARRAY_FACTOR) {
            for(int k = 0; k < m; k++) { 
                if (b[k] % i != 0) {
                    SECOND_ARRAY_FACTOR = false;
                    break;
                }
            }
        }
        if (FIRST_ARRAY_FACTOR and SECOND_ARRAY_FACTOR) {
            count++;
        }
    }
    cout << count;
    return 0;
}