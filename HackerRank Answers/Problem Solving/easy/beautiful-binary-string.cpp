#include <iostream>
#include <string>

using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count{0};
    for(int i = 0; i < n-2 ; i++) {
        if(s.substr(i,3) == "010"){
            count++;
            i = i+2;
        }
    }
    cout << count << endl;
    return 0;
}