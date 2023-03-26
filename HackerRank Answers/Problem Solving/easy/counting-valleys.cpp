#include <bits/stdc++.h>
using namespace std;
int countingValleys(int steps, string path) {
    int val = 0;
    int alt = 0;
    for(int i = 0; i < path.size(); ++i){
        if(path[i] == 'D'){
            alt--;
        }else {
            alt++;
        }
        if(alt == 0){
            if(path[i] == 'U'){
                val++;
            }
        }
    }
    return val;
}

int main(){
    int steps;
    string path;
    cin >> steps >> path;
    int result = countingValleys(steps, path);
    cout << result << "\n";

    return 0;
}