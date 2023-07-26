#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x1,x2,sign=-1,i=3;
	x1=0;
	x2=1;
	do
	{
		x1=x2;
		x2=x1+sign*(1.0/i*1.0);
		i+=2;
		sign=-sign;
	}while(fabs(x1-x2)>1e-6);
	printf("%.5lf",x2);
	return 0;
}
