#include "iostream"
#include "math.h"
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t-- > 0)
	{
		int n;
		cin >> n;
		int *a = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		long int temp_days = 0;
		long int best_solu = 0;
		int recent_large = 0;
		for (int i = 0; i < n; i++)
		{
			temp_days = 0;
			recent_large = i;
			for (int j = i; j < n; j++)
			{
				if (a[j + 1] > a[recent_large])
				{
					temp_days++;
					recent_large = j + 1;
				}
			}
			if (temp_days > best_solu)
			{
				best_solu = temp_days;
			}
		}
		cout << best_solu << "\n";
	}
	return 0;
}
