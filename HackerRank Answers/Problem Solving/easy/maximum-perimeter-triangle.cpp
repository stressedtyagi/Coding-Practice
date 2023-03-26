#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;
bool isTriangle(ll a, ll b, ll c) {
    bool check{true};
    if(a + b <= c)  check = false;
    else if(a + c <= b)  check = false;
    else if(c + b <= a)  check = false;
    return check;
}

int main() {
    int n;
    cin >> n;
    ll s[n];
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }
    ll longPrimeter{0};
    ll longCord[3]{0};
    bool flag{false};
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            for(int k = j+1; k < n; k++) {
                if(isTriangle(s[i],s[j],s[k])){
                    flag = true;
                    ll currentPeri = s[i]+s[j]+s[k];
                    if(currentPeri > longPrimeter) {
                        longPrimeter = currentPeri;
                        longCord[0] = s[i];
                        longCord[1] = s[j];
                        longCord[2] = s[k];
                    }else if (currentPeri == longPrimeter) {
                        ll currentLong{max(s[i],max(s[j],s[k]))};
                        ll prevLong{max(longCord[0],max(longCord[1],longCord[2]))};
                        if(currentLong > prevLong) {
                            longCord[0] = s[i];
                            longCord[1] = s[j];
                            longCord[2] = s[k];
                        }else if (currentLong == prevLong) {
                            ll currentMin{min(s[i],min(s[j],s[k]))};
                            ll prevMin{min(longCord[0],min(longCord[1],longCord[2]))};
                            if(currentMin > prevMin) {
                                longCord[0] = s[i];
                                longCord[1] = s[j];
                                longCord[2] = s[k];
                            }
                        }
                    }
                }
            }
        }
    }
    if(flag){
        sort(longCord,longCord+3);
        for(int i = 0; i < 3; i++) cout << longCord[i] << " ";
        cout << endl;
    }else 
        cout << -1 << endl;
    return 0;
}