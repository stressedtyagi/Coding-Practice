#include <bits/stdc++.h>
#define getI(T) cin >> T
#define TC int T; getI(T); while(T--)
using namespace std;

int main() {
    TC{
        int n;
        cin >> n;
        vector<string> v(20001);
        vector<vector<string>> alphabet(26);
        bool flag{false};
        int goodNames{0};
        int keepTrack[26]{0};

        for(int i = 0; i < n; i++) {
            cin >> v[i];
            alphabet[v[i][0]-97].push_back(v[i]);
        }
        int count{0};
        for(int i = 0; i < 26 && !flag; i++) {
            if(alphabet[i].size() > 0) count++;
            if(count > 1) flag = true;
        }

        if(flag) {
            for(int i = 0; i < n; i++) {
                string curr = v[i];
                for(int j = 0; j < 26; j++) {
                    if(alphabet[j].size() > 0) {

                    }
                }
            }
        }
        cout << goodNames << endl;
    }
}
