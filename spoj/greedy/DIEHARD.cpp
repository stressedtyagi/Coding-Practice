#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int h, a;
        cin >> h >> a;
        int time{0};
        // air    :   +3 h , +2 a
        // water  :   -5 h, -10 a
        // fire   :   -20 h, +5 a
        int currStage{0};
        while(h > 0 && a > 0) {
            if(currStage != 1) {
                h += 3;
                a += 2;
                currStage = 1;
            }else if(currStage != 2 && a > 10) {
                h -= 5;
                a -= 10;
                currStage = 2;
            }else {
                h -= 20;
                a += 5;
                currStage = 3;
            }
            if(h > 0 && a > 0)
                time++;
        }
        cout << time << endl;
    }
    return 0;
}