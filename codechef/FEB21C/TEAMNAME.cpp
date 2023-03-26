#include <bits/stdc++.h>
#define getI(T) cin >> T
#define TC int T; getI(T); while(T--)
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    TC{
        int n;
        cin >> n;
        vector<string> v(20001);
        vector<vector<string>> alphabetCopy(26);
        vector<vector<int>> alphabetCheck(26);
        bool flag{false};
        int goodNames{0};
        int keepTrack[26]{0};

        for(int i = 0; i < n; i++) {
            cin >> v[i];
            alphabetCopy[v[i][0]-97].push_back(v[i]);
            alphabetCheck[v[i][0]-97].push_back(1);
        }
        int count{0};
        for(int i = 0; i < 26 && !flag; i++) {
            if(alphabetCopy[i].size() > 0) count++;
            if(count > 1) flag = true;
        }
        
        if(flag) {
            vector<vector<int>> temp;
            for(int i = 0; i < 26; i++){    //iterate over 26 alphabets
                temp = alphabetCheck;
                for(int j = 0; j < alphabetCopy[i].size(); j++) {   // iterate over all string starting with i alphabet
                    for(int k = 0; k < 26; k++) {   // loop to check all combination of this string with other alphabts strings, but don't go in same vector to check
                        if(keepTrack[k] == 0 && k != i) {
                            for(int l = 0; l < alphabetCopy[k].size(); l++) { // go inside that different char vector and iterate its elements
                                if(temp[k][l] == 1) {
                                    string w1{alphabetCopy[i][j]};
                                    string w2{alphabetCopy[k][l]};  // diff char vector element l
                                    char c{w1[0]};
                                    w1[0] = w2[0];
                                    w2[0] = c;
                                    bool flag_1{false}, flag_2{false};
                                    for(int m = 0; m < alphabetCopy[i].size() && !flag_1; m++) {
                                        if(w2 == alphabetCopy[i][m]) flag_1 = true;
                                    }
                                    for(int m = 0; m < alphabetCopy[k].size() && !flag_1 && !flag_2; m++) {
                                        if(w1 == alphabetCopy[k][m]) flag_2 = true;
                                    }
                                    if(!flag_1 && !flag_2) {
                                        goodNames += 2;
                                    }
                                    else if(flag_1){
                                        temp[k][l] = 0;
                                    }
                                }
                            }
                        }
                    }
                }
                keepTrack[i] = 1;
            }
        }
        cout << goodNames << endl;
    }
    return 0;
}
