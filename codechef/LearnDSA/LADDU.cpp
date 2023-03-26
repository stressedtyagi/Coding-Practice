#include <iostream>
using namespace std;
int main() {
    int t{0};
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        int totalLaddas{0};
        while(n--) {
            string ac;
            cin >> ac;
            if(ac == "CONTEST_WON"){
                int rank;
                cin >> rank;
                totalLaddas += 300;
                if(rank<=20)
                    totalLaddas += (20-rank);
            }else if (ac == "TOP_CONTRIBUTOR") {
                totalLaddas += 300;
            }else if (ac == "BUG_FOUND"){
                int sev;
                cin >> sev;
                totalLaddas += sev;
            }else if (ac == "CONTEST_HOSTED") {
                totalLaddas += 50;
            }
        }
        if(s == "INDIAN")
            cout << totalLaddas/200 << endl;
        else 
            cout << totalLaddas/400 << endl;
    }
    return 0;
}