#include <vector>
#include <iostream>
using namespace std;

int find_even_index (const vector <int> numbers) {
    int index = -1;
    bool flag = false;
    for (size_t i = 0; i < numbers.size() && !flag; i++) {
        int sum_r = 0;
        int sum_l = 0;
        for (int j = i; j >= 0; j--) {
            sum_l += numbers[j];
        }
        for (size_t j = i; j < numbers.size(); j++) {
            sum_r += numbers[j];
        }
        if (sum_r == sum_l) {
            index = i;
            flag = true;
        }
    }
    return index;
}

int main(void) {
    vector<int> test{-1,-2,-3,-4,-3,-2,-1};
    int x = find_even_index(test);
    cout << x << endl;
    return 0;
}