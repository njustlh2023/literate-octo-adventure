#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	double x,a,b,c,d;
	cin>>x>>a>>b>>c>>d;
	double  ans;
	ans=a*x*x*x+b*x*x+c*x+d;
	cout<<fixed<<setprecision(7)<<ans;
	return 0;
}
