#include "stdio.h"
using namespace std;
int main()
{
	int t,a,b,c,d;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>a>>b>>c>>d;
		
		if((a+b+c+d)==0 || (a+b+c)==0 ||(a+b)==0 || (a+c)==0 ||(a+d)==0 ||(b+c)==0 || (b+d)==0 || (c+d)==0)
					cout<<"YES"<<endl;
		
		else if(a==0 || b==0 || c==0 || d==0)
					cout<<"YES"<<endl;
		
		else
					cout<<"NO"<<endl;
	}
	return 0;
}
