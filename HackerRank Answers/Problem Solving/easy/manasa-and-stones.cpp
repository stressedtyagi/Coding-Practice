#include <iostream>
#include <set>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,a,b;
        cin >> n >> a >> b;
        set<int> combi;
        for(int i = 0; i <= n-1; i++) {
            int temp = a*(i) + b*(n-i-1);
            combi.insert(temp);
        }
        set<int>::iterator it = combi.begin();
        while(it != combi.end()) {  
            cout << *it << " ";
            it++;
        }
         
        cout << endl;
    }
    return 0;
}