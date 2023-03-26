#include <iostream>
#include <math.h>
using namespace std;
#define ll int64_t
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int firstS{0};
        int lastS{n-1};
        for(int i = 0; i < n; i++) {
            if(s[i] == '*') {
                firstS = i;
                lastS = i;
                s[i] = 'x';
                break;
            }
        }
        for(int i = n-1; i >= 0; i--) {
            if(s[i] == '*') {
                lastS = i;
                s[i] = 'x';
                break;
            }
        }
        // cout << firstS << " " << lastS << endl;
        int minStar{1};
        if(firstS != lastS) {
            minStar = 2;
            int temp = firstS;
            while(temp != lastS) {
                bool test{false};
                for(int j = k; j > 0; j--) {
                    if(j+temp < n) {
                        if(s[j+temp] == 'x') {
                            temp += j;
                            test = true;
                            break;
                        }
                    }
                }
                if(test) continue;
                for(int j = k; j > 0; j--) {
                    if(j+temp < n) {
                        if(s[j+temp] == '*') {
                            s[j+temp] = 'x';
                            minStar++;
                            temp += j;
                            break;
                        }
                    }
                }
            }
        }
        cout << minStar << endl;
    }
    return 0;
}