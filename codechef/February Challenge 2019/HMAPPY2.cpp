#include "iostream"
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t-- > 0){
		int a, b;
		long long int n, k;
		cin >> n >> a >> b >> k;
		for(long long int i = 1; k != 0 && i <= n; i++){
			if(!(i%a == 0 && i%b == 0)){
				if(i%a == 0 && i%b != 0)	
					k--;
				if(i%a != 0 && i%b == 0)	
					k--;								
			}
		}
		if (k == 0){
			cout << "Win";
		}else {
			cout << "Lose";
		}
		cout << "\n";
	}
	return 0;
}
