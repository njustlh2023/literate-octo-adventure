#include <iostream>
#include <cmath>
using namespace std;
int fac(int n)
{
	if(n%10==0) return n;
	else return n%10+fac(n/10);
}
int main()
{
	cout<<fac(12345);
	return 0;
 } 
