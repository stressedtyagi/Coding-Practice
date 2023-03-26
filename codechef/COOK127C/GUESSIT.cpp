#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int graderResponse{1};
        int j = 1;
        while(j <= 1000)  {
            printf("%d\n",j*j);
            fflush(stdout);
            scanf("%d",&graderResponse);
            if(graderResponse == 1){
                break;
            }
            j++;            
        }
    }
    return 0;
}