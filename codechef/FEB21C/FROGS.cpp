#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> w(n), l(n);
        // int correct[]{1,2,3,4};
        int prevElePos{0};
        for(int i = 0; i < n; i++) {
            cin >> w[i];
            if(w[i] == 1)
                prevElePos = i;
        }
        for(int i = 0; i < n; i++) cin >> l[i];
        
        int taps{0};
        int cTrack{0};
        if(n == 2){
            if(w[0] > w[1]) {
                if(l[0] == 1)   taps = 2;
                else taps = 1;
            }
        }else {
            for(int i = 2; i <= n; i++) {
                int currentElePos{i};
                int currentEleJump{1};
                int k;
                for(k = 0; k < n; k++) {
                    if(w[k] == i){
                        currentElePos = k;
                        currentEleJump = l[k];
                        break;
                    }
                }
                // cout << "i : " << i << ", currentPos (before) : " << currentElePos << ", prevPos(before) : " << prevElePos << endl;
                while(currentElePos <= prevElePos || currentElePos - prevElePos < 1) {
                    currentElePos += currentEleJump;
                    taps++;
                }
                // cout << "i : " << i << ", currentPos (after) : " << currentElePos << ", prevPos(after) : " << prevElePos << endl;
                // cout << "taps : " << taps << endl;
                prevElePos = currentElePos;
            }
        }
        cout << taps << endl;
    }
    return 0;
}


// else if (n == 3) {
//             if(w[0] == 3) {
//                 if(w[1] == 2) {
//                     int i = 0; // for 3 to jump
//                     while(i <= 2 || i-2 <= l[1]){
//                         taps++;
//                         i += l[0];
//                     }
//                     int j = 1; // for 2 to jump
//                     while(j <= 2){
//                         j += l[1];
//                         taps++;
//                     }
//                 }else if (w[1] == 1){
//                     int i = 0; // only need to jump 3
//                     while(i <= 2){
//                         taps++;
//                         i += l[0];
//                     }
//                 }
//             }else if (w[0] == 2) {
//                 if(w[1] == 3){
//                     int i = 0; // for 2 to jump
//                     while(i <= 2){
//                         taps++;
//                         i += l[0];
//                     }
//                     int j = 1; // for 3 to jump
//                     while(j <= i){
//                         taps++;
//                         j += l[1];
//                     }
//                 }else if(w[1] == 1){
//                     int i = 0; // for 2 to jump
//                     while(i <= 1){
//                         taps++;
//                         i += l[0];
//                     }
//                     int j = 0; // for 3 to jump
//                     while(j <= i) {
//                         taps++;
//                         j += l[2];
//                     }
//                 }
//             }else if (w[0] == 1) {
//                 if(w[1] == 3){
//                     if(l[1] == 1) taps = 2;
//                     else taps = 1;
//                 }
//             }
//         }else if (n == 4) {
//             for(int i = 0 ; i < 4; i++) {
//                 if((w[i] != i+1 || w[i] > w[i+1]) && w[i] != 1) {
//                     int nextLessWeightJump{0};
//                     for(int j = 0; j < 4; j++) {
//                         if(w[j] == w[i]-1){
//                             nextLessWeightJump = l[j];
//                             break;
//                         }
//                     }
//                     int temp{i};
//                     while(temp <= )
//                 }
//             }
//         }