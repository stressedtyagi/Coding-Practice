#include <iostream>
#include <stack>
#include <vector>
using namespace std;
void solve_approach_1();
void solve_approach_2_optimal();
int main()
{   
    // solve_approach_1();
    solve_approach_2_optimal();
    return 0;
}

void solve_approach_1() {
    int n;
    cin >> n;
    while(n > 0) {
        vector<int> a(n);
        stack<int> give,want;
        
        // ith house :  want [a[i] >= 0] ->  a[i]  bottles
        //              give [a[i] < 0]  -> -a[i] bottles
        
        for(int i = 0; i < n; i++)  cin >> a[i];
        for(int i = n-1; i >= 0; i--) {
            if(a[i] < 0)
                give.push(i);
            else if (a[i] > 0)
                want.push(i);
        }
        
        long long int cost{0};
        while(!want.empty() && !give.empty()) {
            if(a[want.top()] > abs(a[give.top()])) {
                cost += (abs(a[give.top()]) * abs(give.top() - want.top()));
                a[want.top()] -= abs(a[give.top()]);
                give.pop();
            }else {
                cost += (abs(a[want.top()]) * abs(give.top() - want.top()));
                a[give.top()] += a[want.top()];
                want.pop();
                if(a[give.top()] == 0)
                    give.pop();
            }
        }
        cout << cost << endl;
        cin >> n;
    }
}

void solve_approach_2_optimal() {
    int n;
    cin >> n;
    while(n > 0) {
        vector<int> a(n);
        stack<int> give,want;
        
        // ith house :  want [a[i] >= 0] ->  a[i]  bottles
        //              give [a[i] < 0]  -> -a[i] bottles
        
        long long int cost{0},sum{0};
        for(int i = 0; i < n; i++)  cin >> a[i];
        for(int i = 0; i < n; i++) {
            sum += a[i];
            cost += abs(sum);
        }

        cout << cost << endl;
        cin >> n;
    }
    
}