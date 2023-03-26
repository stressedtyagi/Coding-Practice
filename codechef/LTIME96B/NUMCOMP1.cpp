#include <iostream>
#include <vector>
using namespace std;
#define ll unsigned long int
#define N 1e7 + 2

vector<int> prime(N, true);
void seive()
{
    prime[0] = prime[1] = false;
    for (int i = 2; i * i < N; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= N; j += i)
            {
                prime[j] = false;
            }
        }
    }
}

void count(vector<int> &count)
{
    int x{0};
    for (int i = 1; i <= N; i++)
    {
        if (prime[i])
        {
            x++;
        }
        count[i] = x;
    }
}
int main()
{

    vector<int> prime_count(N, 0);
    seive();
    count(prime_count);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n == 2)
            cout << "1" << endl;
        else if (n == 3)
            cout << "2" << endl;
        else
        {
            int pri = prime_count[n] - prime_count[n / 2];
            cout << pri + 1 << endl;
        }
    }
    return 0;
}