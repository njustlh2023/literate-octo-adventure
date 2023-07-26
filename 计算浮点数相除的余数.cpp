#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double a,b,r;
	int k;
	cin>>a>>b;
	k=(int)(a/b);
	r=a-b*k; 
	cout<<r;
	return 0; 
 } 
