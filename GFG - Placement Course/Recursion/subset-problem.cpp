#include <iostream>
using namespace std;
void helper(string str, int index = 0, string curr = "")
{
    if (index == str.length())
    {
        cout << curr << " ";
        return;
    }
    helper(str, index + 1, curr);
    helper(str, index + 1, curr + str[index]);
}

int main()
{
    string str;
    cin >> str;
    cout << "Subsets: ";
    helper(str);
    cout << endl;
    return 0;
}

// Time: O(2^n)