#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int i=1;
	double sum=0;
	while(i<=12)
	{
		double n;
		cin>>n;
		sum=sum+n;
		i=i+1;
	}
	printf("$%.2lf",sum/12);
	return 0;
}
