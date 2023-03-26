#include <vector>
#include <iostream>
using namespace std; 

int count_sheep(vector<bool> arr) {
  int count = 0;
  for(bool x : arr){
      if(x) count++;
  }
  return count;
}

int main(){
    int i = count_sheep({true,  true,  true,  false,
  true,  true,  true,  true ,
  true,  false, true,  false,
  true,  false, false, true ,
  true,  true,  true,  true ,
  false, false, true,  true});
  cout << i << endl;
}