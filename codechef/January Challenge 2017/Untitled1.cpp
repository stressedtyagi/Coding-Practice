#include <iostream>
using namespace std;
int main() {
  /* code */
  int t=0,c=0,d=0,l=0;
  cin>>t;
  
  
 while(t--){
 	
 	cin>>c;
 	cin>>d;
 	cin>>l;
 		if(((c+d)*4)==l || c<=d && (d*4)==l)
 			cout<<"YES\n";
 		else
 			cout<<"NO\n";
	
  
}
  return 0;
}
