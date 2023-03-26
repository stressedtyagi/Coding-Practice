#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
int main() {
    int n,k;
    cin >> n >> k;
    vector<pair<int,int>> p(n);
    for(int i = 0; i < n; i++) {
        cin >> p[i].first >> p[i].second;
    }
    sort(p.begin(),p.end(), [](pair<int,int> i, pair<int,int> j) -> bool {
        return i.first > j.first;
    });
    int balance{0};
    for(int i = 0; i < n; i++) {
        if(k && p[i].second == 1) {
            balance += p[i].first;
            k--;
        }else if(p[i].second == 0) {
            balance += p[i].first;
        }else {
            balance -= p[i].first;
        }
    }
    cout << balance << endl;
    return 0;
}