#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[4];
        for (int i = 0; i < 4; i++)
            cin >> a[i];
        int max_number_of_copies{0};
        for (int i = 0; i < 4; i++)
        {
            int x = a[i];
            int cnt{0};
            for (int j = 0; j < 4; j++)
            {
                if (a[j] == x)
                    cnt++;
            }
            max_number_of_copies = max(max_number_of_copies, cnt);
        }
        if (max_number_of_copies == 1)
            cout << 2 << endl;
        else if (max_number_of_copies == 2)
            cout << 2 << endl;
        else if (max_number_of_copies == 3)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}