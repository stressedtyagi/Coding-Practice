#include "iostream"
#include "math.h"
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t-- > 0){
		int n;
		cin >> n;
		int *a = new int[n];
		long int no_of_bullets_fired = 0;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			if (a[1] > 0) {
				if(a[i] == -1){
					long int bullets_fired = floor(no_of_bullets_fired/(i-1));
					cout << bullets_fired << " ";
					a[i] = bullets_fired;
					no_of_bullets_fired += a[i];
				}else {
					cout << a[i] << " ";
					no_of_bullets_fired += a[i];
				}
			}
		}
		cout << "\n";
	}
	return 0;
}
