#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double a,b,c,x1,x2,delt,x1s,x2s,x1x,x2x;
	cin>>a>>b>>c;
	delt=b*b-4*a*c;
	if(delt>0)
	{
		x1=(-b+sqrt(delt))/(2*a);
	    x2=(-b-sqrt(delt))/(2*a);
	    cout<<"x1="<<fixed<<setprecision(5)<<x1<<";"<<"x2="<<fixed<<setprecision(5)<<x2;
	}
	else
	{
		if(delt==0) cout<<"x1=x2="<<fixed<<setprecision(2)<<-b/(2*a);
		else
		{
			x1s=(-b)/(2*a);
			x1x=sqrt((4*a*c-b*b))/(2*a);
			x2s=(-b)/(2*a);
			x2x=sqrt((4*a*c-b*b))/(2*a);
			if(b==0)
			cout<<"x1=0.00000"<<"+"<<fixed<<setprecision(5)<<x1x<<"i"
			<<";"<<"x2=0.00000"<<"-"<<fixed<<setprecision(5)<<x2x<<"i";
			else cout<<"x1="<<fixed<<setprecision(5)<<x1s<<"+"<<fixed<<setprecision(5)<<x1x<<"i"
			<<";"<<"x2="<<fixed<<setprecision(5)<<x2s<<"-"<<fixed<<setprecision(5)<<x2x<<"i";
		}
	}
    return 0;
}
