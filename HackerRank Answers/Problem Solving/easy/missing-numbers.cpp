#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    int *a = new int[n];
    for(int i = 0; i < n; i++)  cin >> a[i];

    int m;
    cin >> m;
    int *b = new int[m];
    for(int i = 0; i < m; i++)  cin >> b[i];

    int maxEle = *max_element(b,b+m);
    int minEle = *min_element(b,b+m);
    int tSize = maxEle - minEle + 1;
    vector<int> eleTracker(tSize);

    for(int i = 0; i < m; i++)  eleTracker[b[i]-minEle]++;
    for(int i = 0; i < n; i++)  eleTracker[a[i]-minEle]--;
    for(int i = 0; i < tSize; i++)
        if(eleTracker[i] > 0)
            cout << minEle + i << " ";
    cout << endl;
    return 0;
}