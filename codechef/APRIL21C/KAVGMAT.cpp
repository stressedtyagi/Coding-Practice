#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll findMaxK(vector<vector<ll>>& a, int n, int m, ll k, int size) {
    ll count{0};
    ll verticalStripSum[n][m]{{0}};
    // cout << "::SIZE " << size << endl;
    for(int j = 0; j < m; j++) {
        ll sum{0};
        for(int i = 0; i < size; i++) {
            sum += a[i][j];
        }
        verticalStripSum[0][j] = sum;
        for(int i = 1; i < n-size+1; i++) {
            sum += (a[i+size-1][j] - a[i-1][j]);
            verticalStripSum[i][j] = sum;
        }
    }

    for(int i = 0; i < n-size+1; i++) {
        ll sum{0};
        for(int j = 0; j < m && j < size; j++) 
            sum += verticalStripSum[i][j];
        // cout << sum << " ";
        if(sum/(size*size) >= k)    count++;
        for(int j = 1; j < m-size+1; j++) {
            sum += (verticalStripSum[i][j+size-1]-verticalStripSum[i][j-1]);
            // cout << sum << " ";
            if(sum/(size*size) >= k)
                count++;
        }
        // cout << endl;
    }
    return count;
}

ll solve(vector<vector<ll>>& a, int n, int m, ll k) {
    ll count{0};
    for(auto i : a) {
        for(auto j : i) {
            if(j >= k) count++;
        }
    }
    for(int i = 2; i <= min((int)n,(int)m); i++) {
        count += findMaxK(a,n,m,k,i);
    }
    return count;
}

ll solve2(vector<vector<ll>>& a, int n, int m, ll k) {
    ll ans{0};
    ll aux[n+1][m+1];
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= m; j++) {
            aux[i][j] = 0;
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            aux[i+1][j+1] = a[i][j];
        }
    }
    for(int i = 1; i <= n; i++) {
        ll prev = 0;
        for(int j = 1; j <= m; j++) {
            aux[i][j] += prev;
            prev = aux[i][j];
        }
    }
    for(int i = 1; i <= m; i++) {
        ll prev = 0;
        for(int j = 1; j <= n; j++) {
            aux[j][i] += prev;
            prev = aux[j][i];
        }
    }
    
    
    // for(int i = 0; i <= n; i++) {
    //     for(int j = 0; j <= m; j++) {
    //         cout << aux[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    int mini = min((int)n,(int)m);
    for(int l = 1; l <= mini; l++) {
        for(int i = l; i <= n; i++) {
            for(int j = l; j <= m; j++) {
                ll sum = aux[i][j] + aux[i-l][j-l] - aux[i-l][j] - aux[i][j-l];
                if(sum/(l*l) >= k)
                    ans++;
            }
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n,m,k;
        cin >> n >> m >> k;
        vector<vector<ll>> a;
        for(int i = 0; i < n; i++) {
            vector<ll> temp(m);
            for(int j = 0; j < m; j++) {
                cin >> temp[j];
            }
            a.push_back(temp);
        }
        cout << solve2(a,n,m,k) << endl;
    }
    return 0;
}