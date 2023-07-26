#include <iostream>
#include <cmath>
using namespace std;
int num[15];
int main()
{
	for(int i=1;i<=10;i++)
	{
		cin>>num[i];
	}
	double count=0;
	count=num[1]*28.9+num[2]*32.7+num[3]*45.6+num[4]*78+num[5]*35+num[6]*86.2+num[7]*27.8+num[8]*43+num[9]*56+num[10]*65;
	printf("%.1lf",count);
	return 0;
	
} 
