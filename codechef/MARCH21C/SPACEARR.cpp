#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n,0);
        // vector<int> p(n+1,0);
        for(int i = 0; i < n; i++)  {
            cin >> v[i];
            // p[v[i]]++;  // calcuating number of repetitions of particular number
        }

        sort(v.begin(),v.end());
        long long int turn{0};
        for(int i = 0; i < n; i++) {
            if(v[i] < i+1) {
                long long int diff = i+1 - v[i];
                turn += diff;
            }else if (v[i] > i+1) {
                turn = 0;
                break;  
            }
        }

        if(turn%2 != 0)    cout << "First" << endl;
        else    cout << "Second" << endl;
    }
    return 0;
}