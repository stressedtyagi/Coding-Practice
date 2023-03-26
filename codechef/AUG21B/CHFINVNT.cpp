#include <iostream>
#include <math.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, p, k;
        cin >> n >> p >> k;
        n--;
        int max_ele_per_rem = floor(n / k) + 1;
        int p_rem = p % k;
        int no_of_ele_at_p = (n - p_rem) / k + 1;
        int no_of_ele_at_pre_p = (n - (p_rem - 1)) / k + 1;
        int days{0};
        // cout << "---------------- INFO ---------------" << endl;
        // cout << "Max Ele per rem : " << max_ele_per_rem << endl;
        // cout << "Remender Set of p : " << p_rem << endl;
        // cout << "No of elements in remainder set of p : " << no_of_ele_at_p << endl;
        // cout << "No of elements in remainder set of p-1 : " << no_of_ele_at_pre_p << endl;
        // cout << "-------------------------------" << endl;
        // cout << p << " : " << endl;
        if (no_of_ele_at_p != max_ele_per_rem && p_rem != 0 && no_of_ele_at_pre_p != max_ele_per_rem)
        {
            // apply binary serach to find set of that remender which has 1 less than the max_ele_per_rem
            int start = 0;
            int end = p_rem;
            int mid = start + (end - start) / 2;
            int ele_at_mid;
            while (start <= end)
            {
                ele_at_mid = floor(n - mid) / k + 1;
                if (ele_at_mid == max_ele_per_rem)
                    start = mid + 1;
                else if (ele_at_mid < max_ele_per_rem)
                    end = mid - 1;
                mid = start + (end - start) / 2;
            }
            ele_at_mid = floor(n - mid) / k + 1;

            // cout << start << " <- start, " << end << " <- end" << endl;
            // cout << "mid: " << mid << ", ele_at_mid : " << ele_at_mid << endl;
            int days_before_mid = (mid)*max_ele_per_rem;
            int days_between_mid_and_p = (p_rem - mid) * ele_at_mid;
            days += days_before_mid + days_between_mid_and_p;
        }
        else
        {
            days += (p_rem * max_ele_per_rem);
        }
        // cout << "INITIAL DAYS : " << days << endl;
        days += (p / k) + 1;
        cout << days << endl;
        // cout << "--------------------------------" << endl;
    }
    return 0;
}