#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int g;
        cin >> g;
        while(g--){
            // 1 - head , 2 - tail
            int numberRound, initialState, guessState;
            cin >> initialState >> numberRound >> guessState;
            if(numberRound%2 == 0){
                cout << numberRound/2 << endl;
            }else {
                if(initialState == guessState)
                    cout << numberRound/2 << endl;
                else 
                    cout <<  numberRound/2 + 1 << endl;
            }
        }
    }
}