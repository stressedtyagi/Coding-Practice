#include <iostream>
using namespace std;
int main(){
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a = 0;
        int temp = n;
        while(temp){
            int rem = temp%10;
            temp /= 10;
            if(rem && n % rem == 0)
                a++;
        }
        cout << a << endl;
    }
    return 0;
}