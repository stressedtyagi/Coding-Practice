#include "iostream"
using namespace std;

int main() {
    int a[3], b[3];
    cin >> a[0] >> a[1] >> a[2];
    cin >> b[0] >> b[1] >> b[2];       
    int a_points = 0, b_points = 0;
    
    a[0] > b[0] ? ++a_points:(a[0] != b[0] ? ++b_points:b_points);
    a[1] > b[1] ? a_points++:(a[1] != b[1] ? ++b_points:b_points);
    a[2] > b[2] ? a_points++:(a[2] != b[2] ? ++b_points:b_points);
    cout << a_points << " " << b_points << endl;
    return 0;
}