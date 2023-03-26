#include <iostream>
#include <numeric>
using namespace std;
int main() {
    int k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;
    int sum{((d/k)+(d/l)+(d/m)+(d/n))};

    unsigned lcm_KL = lcm(k,l);
    unsigned lcm_KM = lcm(k,m);
    unsigned lcm_KN = lcm(k,n);
    unsigned lcm_LM = lcm(l,m);
    unsigned lcm_LN = lcm(l,n);
    unsigned lcm_MN = lcm(m,n);
    sum -= (d/lcm_KL + d/lcm_KM + d/lcm_KN + d/lcm_LM + d/lcm_LN + d/lcm_MN);

    unsigned lcm_KLM = lcm(lcm_KL,m);
    unsigned lcm_KLN = lcm(lcm_KL,n);
    unsigned lcm_KMN = lcm(lcm_KM,n);
    unsigned lcm_LMN = lcm(lcm_LM,n);
    sum += (d/lcm_KLM + d/lcm_KLN + d/lcm_KMN + d/lcm_LMN); 

    unsigned lcm_KLMN = lcm(lcm_KLM,n);
    sum -= (d/lcm_KLMN);

    // int a[d+1]{0};
    // for(int i = k; i <= d; i += k){
    //     a[i] = 1;
    // }
    // for(int i = l; i <= d; i += l){
    //     a[i] = 1;
    // }
    // for(int i = m; i <= d; i += m){
    //     a[i] = 1;
    // }
    // for(int i = n; i <= d; i += n){
    //     a[i] = 1;
    // }
    // for(int i = 1; i <= d; i++){
    //     if(a[i] == 1)
    //         sum++;
    // }
    cout << sum << endl;
    return 0;
}