#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	double x1,x2;
	cin>>n;
	x1=n/2.0;
	x2=(x1+n/x1)*0,5;
	while(fabs(x1-x2>=1e-5))
	{
		x1=x2;
		x2=(x1+n/x1)*0,5;
	}
	cout<<x2;
	return 0;
}

