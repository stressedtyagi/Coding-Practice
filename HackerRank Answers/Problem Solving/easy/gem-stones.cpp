#include <iostream>
#include <vector>

using namespace std;
int main() {
    unsigned n;
    cin >> n;
    vector<string> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int count{0};
    for(int i = 97; i <= 122; i++){
        char curr{i};
        bool flag{true};
        for(int i = 0; i < n && flag; i++){
            if(a[i].find(curr) == -1)
                flag = false;
        }
        if(flag)
            count++;
    }
    cout << count << endl;
    return 0;
}