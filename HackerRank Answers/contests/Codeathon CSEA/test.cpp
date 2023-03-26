#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
      int n;
      long long temp;
      cin >> n;
      map<long long, int> count;
      for(int i = 0; i < n; i++){
        cin >> temp;
        count[temp]++;
      }
      
      int oddCount{0};
      bool possible{true};
      for(auto x:count){
        if(x.second%2){
          if(oddCount){possible=false;break;}
          else oddCount++;
        }
      }
      
      if(possible)cout << "YES\n";
      else cout << "NO\n";
      
      
    }
}