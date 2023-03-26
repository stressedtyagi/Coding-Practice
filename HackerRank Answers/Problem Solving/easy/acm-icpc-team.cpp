#include <bits/stdc++.h>
using namespace std;
void solve(vector<string> v,const int n,const int m){
    int max_topics = 0;
    int max_team = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            int count = 0;
            for(int k = 0; k < m; k++){
                if(v[i][k] - '0' || v[j][k] - '0')
                    count++;
            }
            if (max_topics < count){
                max_topics = count;
                max_team = 1;
            }else if (count == max_topics) {
                max_team++;
            }
        }
    }
    cout << max_topics << '\n' <<  max_team << endl;
}

int main() {
    int n,m;
    cin >> n >> m;
    vector<string> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
          
    solve(v,n,m);
    return 0;
}