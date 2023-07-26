#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	double sum2=1;
	for(int i=1;i<=n;i++)
	{
		double sum1=1;
		for(int j=1;j<=i;j++)
		{
			sum1=sum1*j;
		}
		sum2=sum2+(1.0/sum1);
	}
	printf("%.10lf",sum2);
	return 0;
}
