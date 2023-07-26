#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,k,i=1;
	double total1=0,total2=200;
	cin>>n>>k;
	for(;i<=20;i++)
	{
		total1=n*i;
		if(total1>=total2)
		{
			break;
		}
	    total2=total2*(1+k/100.0);
	}
	if(i<=20) cout<<i;
	else cout<<"Impossible";
	return 0;
}
