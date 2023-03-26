#include<iostream>
using namespace std;

int main(){
    int t; //test case
    int n = 0;
    int min = 0;
    cin >> t;
    while(t > 0){
        
        cin >> n;
        int* v = new int(n);
        
        int i = 0;        
        while(n > 0) {
            cin >> v[i++];
            n--;
        }

        int x = sizeof(v)/sizeof(v[0]);
        sort(v,v + x);    
        
        for(int j = 0; j < n; j++) {
            cout << v[j];
        }
        t--;
    }
    return 0;
}
