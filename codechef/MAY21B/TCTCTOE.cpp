#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


int solve(vector<string> v) {
    int status{1};
    int xCount{0}, oCount{0},_Count{0};
    unordered_map<int,int> xRowMap, xColMap, oRowMap, oColMap;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            int val = v[i][j];
            xCount += val == 'X';
            oCount += val == 'O';
            _Count += val == '_';

            if (val == 'X') {
                xRowMap[i]++;
                xColMap[j]++;
            }else if (val == 'O') {
                oRowMap[i]++;
                oColMap[j]++;

            }
        }
    }

    // Handling case 3
    if(xCount < oCount || abs(xCount-oCount) > 1)
        return 3;
    char turn = (xCount == oCount ? 'X' : 'O');
    bool xWin{false}, oWin{false};
    for(int i = 0; i < 3; i++) {
        if(xRowMap[i] == 3)
            xWin = true;
        if(xColMap[i] == 3)
            xWin = true;
        if(oRowMap[i] == 3)
            oWin = true;
        if(oColMap[i] == 3)
            oWin = true;
        if(xWin && oWin)
            return 3;
    }
    bool XMainDiagCheck = (v[0][0] == 'O' && v[1][1] == 'O' && v[2][2] == 'O');
    bool XAuxDiagCheck = (v[0][2] == 'O' && v[1][1] == 'O' && v[2][0] == 'O');
    if( XMainDiagCheck || XAuxDiagCheck)
        oWin = true;
    if((v[0][0] == 'X' && v[1][1] == 'X' && v[2][2] == 'X' )||
        (v[0][2] == 'X' && v[1][1] == 'X' && v[2][0] == 'X'))
        xWin = true;
    if(xWin && oWin)
        return 3;
    if(xWin && turn == 'X') 
        return 3;
    if(oWin && turn == 'O')
        return 3;
    // Handling Case 1 - draw or win ... no turn left
    if(_Count == 0 || xWin || oWin)
        return 1;
     
    // Handling Case 1 & 2 - turn left
    return 2;
}


int main() {
    int t;
    cin >> t;
    while(t--) {
        vector<string> v(3);
        for(int i = 0; i < 3; i++) cin >> v[i];
        int result = solve(v);
        cout << result << endl;
    }
    return 0;
}