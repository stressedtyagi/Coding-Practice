#include <bits/stdc++.h>
#define lli long long int
#define MAX 1e9
using namespace std;

vector<int64_t> primes;
vector<bool> seive(MAX + 1, false);

void Sieve()
{
    int64_t range = sqrt(MAX);
    primes.push_back(2);
    for (int64_t i = 2; i <= range; i += 2)
        seive[i] = true;

    for (lli i = 3; i <= range; i += 2)
    {
        if (!seive[i])
        {
            primes.push_back(i);
            seive[i] = true;
            for (lli j = i; (j * i) <= range; j += 2)
            {
                if (!seive[j * i])
                    seive[j * i] = true;
            }
        }
    }
}

int main()
{
    Sieve();
    // for (auto it : primes)
    //     cout << it << endl;
    int64_t t;
    cin >> t;
    while (t--)
    {
        int64_t x, y;
        cin >> x >> y;
        if (x == 1)
            x++;
        if (x & 1)
        {
            int64_t s1 = (x + 1) + (x + 3);

            int64_t lpf = -1;
            for (auto it : primes)
            {
                if (x % it == 0)
                {
                    lpf = it;
                    break;
                }
            }

            // cout << "CASE : 2" << endl;
            // cout << x << " " << lpf << endl;

            int64_t s2 = x + (x + lpf);

            if (s1 >= s2 && x + lpf <= y && lpf != -1)
            {
                cout << x << " " << x + lpf << endl;
            }
            else if (x + 3 <= y)
            {
                cout << x + 1 << " " << x + 3 << endl;
            }
            else
            {
                cout << "-1" << endl;
            }
        }
        else if (x + 2 <= y)
        {
            cout << x << " " << x + 2 << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
        // cout << "------" << endl;
    }
    return 0;
}