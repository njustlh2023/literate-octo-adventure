#include <iostream>
using namespace std;
int main()
{
	int n,x1=1,x2,f=-1;
	double sum=1;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		x2=x1+1;
		sum=sum+f*(1.0/x2);
		x1=x2;
		f=-1*f;
	}
	printf("%.4lf",sum);
	return 0;
}
