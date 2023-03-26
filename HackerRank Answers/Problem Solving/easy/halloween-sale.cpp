#include <bits/stdc++.h>
using namespace std;
int main() {
    int p,d,m,s;
    cin >> p >> d >> m >> s;
    int item_bought = 0;
    int sum = 0;
    int current_item_price = p;
    do{
        sum += current_item_price;
        if (current_item_price-d > m) {
            current_item_price -= d;
        }else {
            current_item_price = m;
        }
        if (sum <= s)
            item_bought++;                   
    }while (sum <= s);
    
    cout << item_bought << endl;
    
    return 0;
}