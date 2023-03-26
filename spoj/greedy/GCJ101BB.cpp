#include <iostream>
#include <vector>
using namespace std;

#define ll long long int
int main() {
    int l;
    cin >> l;
    for(int c = 1; c <= l; c++) {
        // n - number of birds
        // b - location of barn
        // k - min number of birds to reach
        // t - max time for birds to reach barn
        // x[] - initial position of birds
        // v[] - initial velocity of birds

        ll n,b,k,t;
        cin >> n >> k >> b >> t;
        vector<int> x(n),v(n);
        for(int i = 0; i < n; i++)  cin >> x[i];
        for(int i = 0; i < n; i++)  cin >> v[i];

        cout << "Case #" << c << ": ";

        int reached{0};
        int swapNeeded{0}, swapDone{0};

        for(int i = n-1; i >= 0; --i) {
            int distance = b - x[i];
            int cover = v[i] * t;
            if(cover >= distance){
                swapDone += swapNeeded;
                reached++;
            }else {
                swapNeeded++;
            }
            if(reached == k)
                break;
        }
        if(reached == k)
            cout << swapDone << endl;
        else
            cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}