#include <iostream>
#include <vector>

using namespace std;
int main() {
  
  unsigned d,m,n;
  cin >> n;
  vector<unsigned> s;
  for(size_t i = 0 ; i < n; ++i){
    unsigned x;
    cin >> x;
    s.push_back(x);
  }
  cin >> d >> m;
  unsigned count = 0, len = 1, sum = 0, dec = 0;
  for(int i = 0; i < n; ++i){
    sum += s[i];
    if(len == m){
      if(sum == d){
        count++;
      }
      sum -= s[dec];
      dec++;
    }else {
      len++;
    }
  }
  cout << count << endl;
  return 0;
}