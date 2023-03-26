#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;

        int count{0};
        for(int i = 1; i <= n; i++) {
            for(int j = i+1; j <= n; j++) {
                cout << "a : " << i << ", b : " << j << endl;
                cout << "--------------------" << endl;
                cout << "1. (m%a) : " << m%i << endl;
                cout << "2. (m%a)%b : " << (m%i)%j << endl; 
                cout << ".................................." << endl;
                cout << "3. (m%b) : " << (m%j) << endl; 
                cout << "4. (m%b)%a : " << (m%j)%i << endl; 
                cout << "--------------------" << endl;
            }
        }
        cout << count << endl;
    }
    return 0;
}