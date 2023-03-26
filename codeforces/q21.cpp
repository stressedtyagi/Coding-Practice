#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long int s1,s2,s3,s4;
    cin >> s1 >> s2 >> s3 >> s4;
    long int a[]{s1,s2,s3,s4};
    sort(a,a+4);
    int type{0};
    for(int i = 0; i < 4; i++) {
        if(a[i] == a[i+1]) type++;
    }
    cout << type << endl;
    return 0;
}