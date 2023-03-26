#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // Budget is P rupees

        // Fuljhari, where each costs a rupees
        // Anar, where each costs b rupees
        // Chakri, where each costs c rupee

        // A Fuljhari can be lit on its own
        // To light an Anar, you will need x Fuljharis
        // To light a Chakri, you will need y Fuljharis

        ll p, a, b, c, x, y;
        cin >> p >> a >> b >> c >> x >> y;

        // condition 1 : all anar
        ll anarCost = a * x + b;
        ll anarCount = p / anarCost;
        // ll fuljhariCount = (p - anarCount * a) / a;
        // cout << "C1 : " << anarCount << " " << fuljhariCount << endl;
        // ll c1 = fuljhariCount / x;

        // condition 2 : all chakri
        ll chakriCost = a * y + c;
        ll chakriCount = p / chakriCost;
        // fuljhariCount = (p - chakriCount * c) / a;
        // cout << "C2 : " << chakriCount << " " << fuljhariCount << endl;
        // ll c2 = fuljhariCount / y;
        cout << max(anarCount, chakriCount) << endl;
    }
    return 0;
}