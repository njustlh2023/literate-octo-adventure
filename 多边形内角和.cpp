#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,i;
	double a=0;
	cin>>n;
	for(i=1;i<=(n-1);i++)
	{
		double ang;
		cin>>ang;
		a=a+ang;
	}
	cout<<((n-2)*180)-a;
	return 0;
}
