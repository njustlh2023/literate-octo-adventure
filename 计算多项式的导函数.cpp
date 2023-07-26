#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,a;
	if(!n)
	{
		cin>>a;
		cout<<0;
		return 0;
	}
	for(int i=n;i>=1;i--)
	{
		cin>>a;
		a=i*a;
		cout<<a<<' ';
	}
	return 0;
}
