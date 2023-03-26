#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    long long n;
    cin >> s >> n;
    long long a_count = 0;
    int i = 1;
    for (auto x : s) {
        if(i > n)
            break;
        if( x == 'a')
            a_count++;
        i++;
    }
    if (n <= s.length()) {
        cout << a_count << endl;
    }else {
        long long count = ((n/s.length())*a_count);
        long long remaining = n%s.length();
        if (remaining){
            for (size_t i = 0; i < remaining; i++){
                if (s[i] == 'a') {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    
    return 0;
}