#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x0,x1,f,f1;
	x1=1.5;
	do
	{
		x0=x1;
		f=2*pow(x0,3)-4*pow(x0,2)+3*x0-6;
		f1=6*pow(x0,2)-8*x0+3;
		x1=x0-(f/f1);
	}while(fabs(x1-x0)>1e-5);
	printf("%.5lf",x1);
	return 0;
}
