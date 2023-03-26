#include "iostream"
using namespace std;
int main()
{
	int n,q,k,i,x,t,flag,sum=0;
	cin>>n;								//range of Number Given
	cin>>k>>q;							//K=number of allowed numbers, Q=number of queries
	int *f=new int[k];					//Dynamic declaration of memory for allowed numbers
	
	for(i=0;i<k;i++)
	{
		cin>>t;
		if(t<1 && t<n)
		cin>>f[i];
		sum+=f[i];
	}
	
	for(i=0;i<q;i++)
	{
			cin>>x;
			flag=0;
			for(int j=0;j<k;j++)
			{
				
				if(x==f[j] || sum==x || sum+f[j]==x)
						flag=1;
				//else if 
				else
						flag=0;
			}
			if(flag=1)
				cout<<"Yes"<<endl;
				
	}
	delete [] f;
	return 0;
}
