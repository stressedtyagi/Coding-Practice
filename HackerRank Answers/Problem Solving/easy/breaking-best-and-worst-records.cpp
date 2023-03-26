#include "iostream"
using namespace std;
int main() {
  int n; 
  cin >> n;
  int score, maxScore, minScore ;
  int maxCount = 0, minCount = 0;
  cin >> score;
  maxScore = minScore = score;
  int i = 1;
  while(i < n){
    cin >> score;
    
    if (score > maxScore) {
      maxCount++;
      maxScore = score;
    }else if (score < minScore) {
      minCount++;
      minScore = score;
    }
    i++;
  }
  cout << maxCount << " " << minCount << '\n';
  return 0;
}
