#include <iostream>
#include <cmath>
using namespace std;
int fac1(int n)
{
	int f=1;
	for(int i=1;i<=n;i++)
	{
		f*=i;
	}
	return f;
}
int fac2 (int n)//1!+2!+3!
{
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=fac1(i);
	}
	return sum;
}
int fac3 (int n)
{
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=fac2(i);
	}
	return sum;
}
int main()
{
	cout<<fac3(5);
	return 0;
}
