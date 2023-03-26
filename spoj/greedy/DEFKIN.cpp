// DEFKIN - Defense of a Kingdom
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,m,k;
        cin >> n >> m >> k;
        vector<int> row(n+1), col(m+1);
        for(int i = 1; i <= k; i++) {
            int x,y;
            cin >> x >> y;
            row[x] = -1;
            col[y] = -1;
        }
        int maxRow{0};
        int start{1};
        for(int i = 1; i <= n; i++) {
            if(row[i] == -1) {
                maxRow = max(maxRow,i-start);
                start = i+1;
            }else if (i == n) {
                if(row[i] == -1)
                    maxRow = max(maxRow,i-start);
                else
                    maxRow = max(maxRow,i+1-start);
            }
        }

        int maxCol{0};
        start = 1;
        for(int i = 1; i <= m; i++) {
            if(col[i] == -1) {
                maxCol = max(maxCol,i-start);
                start = i+1;
            }else if (i == m) {
                if(col[i] == -1)
                    maxCol = max(maxCol,i-start);
                else
                    maxCol = max(maxCol,i+1-start);
            }
        }
        cout << long(maxCol*maxRow) << endl;
    }
    return 0;
}