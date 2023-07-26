#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int i,sum=0;
	for(i=1;i<=50;i++)
	{
		int c;
		cin>>c;
		sum+=c;
		if(sum>=10000) break;
	}
	cout<<sum<<" "<<i;
	return 0;
}
