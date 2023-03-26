#include <iostream>
#include <vector>
#include <limits>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n,k;
		cin >> n >> k;
		vector<int> a(n);
		int itteration{0};
		bool flag{false};
		int minimum{INT32_MAX};
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			if(a[i] < k)	flag = true;
			if(a[i] < minimum)	minimum = a[i];
		}
		if(flag) {
			cout << 4 - minimum << endl;
		}else {
			cout << 0 << endl;
		}
	}
	return 0;
}