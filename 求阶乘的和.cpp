#include <iostream>
using namespace std;
int main()
{
	int n,i,count=1,sum=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			count=count*j;
		}
		sum=sum+count;
		count=1;
	}
	cout<<sum;
	return 0;
}
