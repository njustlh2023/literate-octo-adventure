#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x;
	int n;
	float p,sum=1;
	cin>>x>>n;
	for(int i=1;i<=n;i++)
	{
		p=pow(x,i);
		sum=sum+p;
	}
	printf("%.2lf",sum);
	return 0;
}
