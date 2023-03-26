#include "iostream"
#include "string.h"
using namespace std;
int main() {
    string n, newTime, amORpm;
    cin >> n;
    int hh,mm,ss;

    hh = stoi(n.substr(0,2));
    mm = stoi(n.substr(3,2));
    ss = stoi(n.substr(6,2));
    amORpm = n.substr(8,2);

    if ( ( hh >= 01 && hh <= 12 ) && ( mm >= 00 && mm <= 59 ) && 
          ( ss >= 00 && ss <= 59 ) && 
          ( amORpm.compare("AM") == 0 || amORpm.compare("PM") == 0 ) && 
          n.length() == 10) { 
      
      string n_hh,n_mm,n_ss;
      
      if (amORpm.compare("AM") == 0) {
        if (hh == 12) {
          n_hh = "00";
        }else {
          if (hh < 12) {
            n_hh = "0" + to_string(hh);  
          }else {
            n_hh = to_string(hh);
          }          
        }
      }else if (amORpm.compare("PM") == 0) {
        if (hh == 12) {
          if (hh < 12) {
            n_hh = "0" + to_string(hh);  
          }else {
            n_hh = to_string(hh);          
          }
        }else {      
          n_hh = to_string(12 + hh);
        }
      }
      if (mm < 12) {
        n_mm = "0" + to_string(mm);
      }else {
        n_mm = to_string(mm);
      }
      if (ss < 12) {
        n_ss = "0" + to_string(ss);
      }else {
        n_ss = to_string(ss);
      }
      newTime = n_hh + ":" + n_mm + ":" + n_ss;
      cout << newTime;
    }
    return 0;
}
