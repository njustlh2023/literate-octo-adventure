#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int i,sum1=0,sum2=0;
	for(i=1;i<=12;i++)
	{
		int c;
		cin>>c;
		sum1+=300;
		if(sum1<c)
		{
			cout<<-i;
			return 0;
		}
		else
		{
			sum2=sum2+(sum1-c)/100;
			sum1=(sum1-c)%100;
		}
	}
	cout<<(sum1+sum2*120);
	return 0;
}
