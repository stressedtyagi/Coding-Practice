#include <bits/stdc++.h>
using namespace std;
int solve(const int& n){
    int shared = 5;
    int cumm = 0;
    for(int i = 1; i <= n ; ++i) {
        int liked = floor(shared/2);
        cumm += liked;
        shared = liked * 3;
    }
    return cumm;
}
int main(){
    int n;
    cin >> n;
    int result = solve(n);
    cout << result << endl;
    return 0;
}