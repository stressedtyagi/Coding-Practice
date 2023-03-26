#include <bits/stdc++.h>
using namespace std;

int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {
    int fine = 0;
    if (y1 > y2) {
        fine = 10000;
    }else if (y1 == y2) {
        if (m1 > m2) {
            fine = 500*(m1-m2);
        }else if (m1 == m2) {
            if (d1 > d2) {
                fine = 15*(d1-d2);                 
            }
        }        
    }
    return fine;
}

int main() {
    int d1,m1,y1;   // return date
    int d2,m2,y2; //due date
    cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
    int result = libraryFine(d1, m1, y1, d2, m2, y2);
    cout << result << "\n";
    return 0;
}
