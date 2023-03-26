#include <iostream>
#include <vector>
#include <unordered_map>
#include <numeric>
#include <queue>
#include <stack>
using namespace std;
#define ll long long int
int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n,x;
        cin >> n >> x;
        unordered_map<ll,vector<ll>> mp;
        for(int i = 1; i < n; i++) {
            ll u,v;
            cin >> u >> v;
            mp[u].push_back(v);
        }
        // for(auto x : mp) {
        //     cout << x.first << " : ";
        //     for(auto i : x.second) {
        //         cout << i << " ";
        //     }
        //     cout << endl;
        // }
        // cout << "-------------" << endl;
        vector<ll> child(n+1,0);
        stack<pair<int,int>> st;
        st.push({1,0});
        
        while(!st.empty()) {
            pair<int,int> pi = st.top();
            if(mp.find(pi.first) != mp.end() && child[pi.first] == 0) {
                for(int i : mp[pi.first]) {
                    st.push({i,pi.first});
                }
            }else {
                st.pop();
                if(child[pi.first] == 0)
                   child[pi.second]++;
                else
                    child[pi.second] += (child[pi.first]+1);
            }   
        }
        // for(int i = 1; i <= n; i++) {
        //     cout << i << " --> " << child[i] << endl;
        // }
        auto compare = [](pair<ll,ll> a, pair<ll,ll> b) {
            return a.second < b.second;
        };
        vector<ll> v(n+1,-1);
        priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,decltype(compare)> pq(compare);
        v[1] = x;
        queue<int> q;
        q.push(1);
        while(!q.empty()) {
            int i = q.front();
            q.pop();
            // if(v[i] == -1 || i==1) {
                for(auto j : mp[i]) {
                    pq.push({j,child[j]});
                    q.push(j);
                }
                ll value = v[i];
                ll updateCost = v[i];
                while(!pq.empty()) {
                    // cout << pq.top().first << " " << pq.top().second << endl;
                    v[pq.top().first] = value;
                    value += updateCost;
                    pq.pop();
                }
                // cout << "-----------------------" << endl;
            // }
        }
        unsigned long long int MOD = 1000000007;
        ll minCost{0};
        for(int i = 1; i <= n; i++) {
            // cout << i << " --> " << v[i] << endl;
            minCost = (minCost+v[i])%MOD;
        }
        cout << minCost << endl;
    }
    return 0;
}