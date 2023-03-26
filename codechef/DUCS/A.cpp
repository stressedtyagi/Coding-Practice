#include "iostream"
using namespace std;

int main() {

    int n1;
    cin >> n1;
    
    int *n2 = new int[n1];
    int numberOfTerms = 0, sum = 0;

    for(int i = 0; i < n1; i++){
        cin >> n2[i];
        if(sum != n1){
            sum += i+1;
            numberOfTerms++;
        }
    }
    numberOfTerms++;
    cout << numberOfTerms << '\n';

    int index = 0;
    int *terms = new int[numberOfTerms];
    for(int i = 0; i < numberOfTerms; i++){
        if(index + 1 > numberOfTerms) {
            terms[i] = n2[i - 1] - terms[0];
        }else {
            terms[i] = n2[index] - n2[index + numberOfTerms - i - 1] + n2[index + 1];
            terms[i] = terms[i] / 2;
            index += numberOfTerms - i - 1;
        }
        cout << terms[i] << " ";
    }

    cout << '\n';
    return 0;
}