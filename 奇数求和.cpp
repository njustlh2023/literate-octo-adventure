#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int m,n,i,sum=0;
	cin>>m>>n;
	for(i=m;i<=n;i++)
	{
		if(i%2==1) sum=sum+i;
	}
	cout<<sum;
	return 0;
}
