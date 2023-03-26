#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int m,n;
        cin >> m >> n;
        auto comp = [](const pair<char,int>& a, const pair<char,int>& b) -> bool {
            return a.second < b.second;
        };
        priority_queue<pair<char,int>,vector<pair<char,int>>,decltype(comp)> pq(comp);
        int x;
        for(int i = 1; i < m; i++)  cin >> x, pq.push({'c',x});
        for(int i = 1; i < n; i++)  cin >> x, pq.push({'r',x});

        int cost{0};
        int cutRow{1};
        int cutCol{1};
        while(!pq.empty()) {
            char c = pq.top().first;
            int a = pq.top().second;
            pq.pop();
            if(c == 'r') {
                a *= cutCol;
                cutRow++;
            }else if (c == 'c') {
                a *= cutRow;
                cutCol++;
            }
            cost += a;
        }

        cout << cost << endl;
    }   
}