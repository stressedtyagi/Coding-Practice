#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int pivot = v[0];
    vector<int> left;
    vector<int> equal;
    vector<int> right;
    for(int i = 0; i < n; i++){
        if(v[i] > pivot)
            right.push_back(v[i]);
        else if(v[i] == pivot)
            equal.push_back(v[i]);
        else 
            left.push_back(v[i]);
    }
    for(int i = 0; i < left.size(); i++)
        cout << left[i] << " ";
    for(int i = 0; i < equal.size(); i++)
        cout << equal[i] << " ";
    for(int i = 0; i < right.size(); i++)
        cout << right[i] << " ";
    cout << endl;
    return 0;
}