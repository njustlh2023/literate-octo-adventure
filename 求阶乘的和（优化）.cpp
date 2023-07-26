#include <iostream>
using namespace std;
int main()
{
	int n,i,count=1,sum=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		count=count*i;
		sum+=count;
	}
	cout<<sum;
	return 0;
}
