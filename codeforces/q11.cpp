#include <iostream>
using namespace std;
bool primeCheck(int x){
    return (!(x%2) || !(x%3) || !(x%5) || !(x%49));
}
int main() {
    int n,m;
    cin >> n >> m;
    int i;
    if(n == 2) i = 3;
    else if(n == 3) i = 5;
    else {
        for(i = n+1; primeCheck(i);i++);
    }  
    if(i == m)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
    return 0;
}