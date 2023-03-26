#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int removeCount{0};
    for(int i = 0; i < n-1; i++){
        char c{s[i]};
        while(s[i+1] == c){
            removeCount++;
            i++;
        }
    }
    cout << removeCount << endl;
    return 0;
}