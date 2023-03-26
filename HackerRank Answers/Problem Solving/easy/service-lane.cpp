#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main() {
    int n, t;
    cin >> n >> t;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
	    cin >> v[i];
    }
    while(t--){
	    int i, j;
	    cin >> i >> j;
	    int carWidth = INT_MAX;
	    for(int k = i; k <= j; k++){
		if(v[k] < carWidth)
			carWidth = v[k];
	    }
	    cout << carWidth << endl;
    }
	
    return 0;
}
