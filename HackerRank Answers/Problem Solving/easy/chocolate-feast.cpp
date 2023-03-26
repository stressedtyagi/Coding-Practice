// int n: Bobby's initial amount of money
// int c: the cost of a chocolate bar
// int m: the number of wrappers he can turn in for a free bar

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n,c,m;
        cin >> n >> c >> m;
        int barEat = n/c;
        int newEat = 0;
        int warraperLeft = barEat;
        int i = 1;
        while (warraperLeft/m){
            newEat = warraperLeft/m;
            barEat += newEat;
            warraperLeft = newEat + warraperLeft%m;

            //HOW TO OVERCOMPLICATE THINGS :)
            // cout << i++ << ", BAR EAT = " << barEat << ", n_init : " << n << ", newEAT : " << newEat;
            // if(!newEat){
            //     barEat += n/m;
            //     n /= m;
            // }else {
            //     barEat += newEat;
            //     n = (((newEat/m)*c) + (newEat%m)); 
            // }
            
            // cout << ", n_end : " << n << endl;

        }
        cout << barEat << endl;
    }
    return 0;
}