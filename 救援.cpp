#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int i,n;
	double t=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		double x,y;
		int m;
		cin>>x>>y>>m;
		t+=2*sqrt(x*x+y*y)/50+m*1.5;
	}
	cout<<ceil(t);
	return 0;
}
