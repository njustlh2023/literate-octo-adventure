#include <iostream>
#include <cmath>
using namespace std;
fac(int n)
{
	int f=1;
	for(int i=1;i<=n;i++) f*=i;
	return f;
}
int main()
{
	cout<<fac(6);
	return 0;
}
