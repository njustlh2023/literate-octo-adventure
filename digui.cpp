#include <iostream>
#include <cmath>
using namespace std;
int fac(int n)
{
	if(n==1||n==0) return 1;
	else return n*(fac(n-1));
}
int main()
{
	cout<<fac(6);
	return 0;
 } 
