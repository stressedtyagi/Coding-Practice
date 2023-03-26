#include "iostream"
using namespace std;
int main()
{
	int t,i,j,n,k,l,count,z=0;
	int* a=NULL;
	cin>>t;
	for(i=0;i<t;i++)
	{	
		cin>>n>>k;
		a=new int[n];
		
		for(j=0;j<n;j++)
		{
			cin>>a[j];
		}
		
		for(j=0;j<n;j++)
		{
			
		
			if(a[j]|a[j+1] >= k)
				count++;
		}
		cout<<count<<"\n";
		count=0;
		delete [] a;
	}
	 
	
	return 0;
}
