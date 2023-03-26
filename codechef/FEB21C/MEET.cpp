#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        string p,pAP;
        cin >> p >> pAP;
        int pHH = stoi(p.substr(0,2));
        int pMM = stoi(p.substr(3,2));
        if(pAP == "AM" && pHH == 12){
            pHH = 0;
        }else if (pAP == "PM" && pHH != 12) {
            pHH += 12;
        }

        int n;
        cin >> n;
        string l,r,lAP,rAP;

        for(int i = 0; i < n; i++) {
            cin >> l >> lAP >> r >> rAP;
            int lHH = stoi(l.substr(0,2));
            int lMM = stoi(l.substr(3,2));
            int rHH = stoi(r.substr(0,2));
            int rMM = stoi(r.substr(3,2));

            if(lAP == "AM" && lHH == 12){
                lHH = 0;
            }else if (lAP == "PM" && lHH != 12) {
                lHH += 12;
            }

            if(rAP == "AM" && rHH == 12){
                rHH = 0;
            }else if (rAP == "PM" && rHH != 12) {
                rHH += 12;
            }

            
            if(pHH > lHH) {              
                if(pHH < rHH) cout << "1";
                else if(pHH == rHH && pMM <= rMM) cout << "1";
                else cout << "0";
            }else if (pHH == lHH) {
                if(pMM >= lMM){
                    if(pHH < rHH) cout << "1";
                    else if(pHH == rHH && pMM <= rMM) cout << "1";
                    else cout << "0";
                }else {
                    cout << "0";
                }
            }else {
                cout << "0";
            }
        }
        cout << endl;
    }
    return 0;
}


            // if(pAP == "AM") {
            //     if(lAP == "AM") {
            //         if(pHH >= lHH && pHH <= rHH) {
            //             if(pMM >= lMM && pMM <= rMM) {
            //                 cout << 1;
            //             }else{
            //                 cout << 0;
            //             }
            //         }else {
            //             cout << 0;
            //         }
            //     }else {
            //         cout << 0;
            //     }
            // }else {
            //     if(lAP == "AM"){
            //         if(pHH >= lHH && pHH <= rHH) {
            //             if(pMM >= lMM && pMM <= rMM) {
            //                 cout << 1;
            //             }else{
            //                 cout << 0;
            //             }
            //         }else {
            //             cout << 0;
            //         }
            //     }else {
            //         if(pHH >= lHH && pHH <= rHH) {
            //             if(pMM >= lMM && pMM <= rMM) {
            //                 cout << 1;
            //             }else{
            //                 cout << 0;
            //             }
            //         }else {
            //             cout << 0;
            //         }                    
            //     }
            // }