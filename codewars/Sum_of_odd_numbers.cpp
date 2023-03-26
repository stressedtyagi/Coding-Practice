#include <iostream>
using namespace std;
long long rowSumOddNumbers(unsigned n){
    if(n > 1){
        unsigned int totalElements = (n*n) + (n-1);
        long long sum_total = (totalElements * (totalElements + 1))/2;

        unsigned even_n = (totalElements - 1)/2;
        long long sum_even = (even_n)*(even_n + 1);
        long long sum_find_total = sum_total - sum_even;

        unsigned int totalElements_p = ((n-1)*(n-1)) + (n-2);
        long long sum_total_p = (totalElements_p * (totalElements_p + 1))/2;

        unsigned even_n_p = (totalElements_p - 1)/2;
        long long sum_even_p = (even_n_p)*(even_n_p + 1);
        long long sum_find_total_p = sum_total_p - sum_even_p;


        long long final_sum = sum_find_total - sum_find_total_p;
        return final_sum;
    }else {
        return 1;
    }
}

int main(){
    long long x = 
    rowSumOddNumbers(4);
    cout << x;
    return 0;
}