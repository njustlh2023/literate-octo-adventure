#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int m,n,i,sum=0;
	cin>>m>>n;
	for(i=m;i<=n;i=i+1)
	{
		if(i%17==0)
		sum+=i;
	}
	cout<<sum;
	return 0;
}
