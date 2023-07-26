#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double n,y;
	cin>>n;
	if(n>=0&&n<5) y=-n+2.5;
	else if(n>=5&&n<10) y=2-1.5*(n-3)*(n-3);
	else y=n/2-1.5;
	cout<<fixed<<setprecision(3)<<y;
	return 0;
}
