#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x,n,i;
	cin>>x>>n;
	double z=x;
	for(i=1;i<=n+1;i++)
	{
		z=z*(1.001);
	}
	printf("%.4f",z);
	return 0;
}
