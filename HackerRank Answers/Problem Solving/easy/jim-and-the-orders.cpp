#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<pair<int,int>> serveTime(n);
    int o[n], p[n];
    for(int i = 0; i < n ; i++){
      cin >> o[i] >> p[i];
      serveTime[i].first = o[i] + p[i];
      serveTime[i].second = i+1;
    } 
    sort(serveTime.begin(),serveTime.end(), [](pair<int,int> i, pair<int,int> j) {
        if(i.first != j.first) return i.first < j.first;
        else return i.second < j.second;
    });
    for(int i = 0; i < n; i++) {
        cout << serveTime[i].second << " ";
    }
    cout << endl;

    return 0;
}