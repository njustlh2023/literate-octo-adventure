#include <iostream>
using namespace std;
int main()
{
	int n,q1,p1,q2,p2;
	cin>>n;
	q1=2;
	p1=1;
	double sum=2;
	for(int i=2;i<=n;i++)
	{
		q2=q1+p1;
		p2=q1;
		sum=sum+(q2*1.0/p2);
		p1=p2;
		q1=q2;
	}
	printf("%.4lf",sum);
	return 0;
}
