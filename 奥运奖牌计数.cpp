#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n,i=1,sumj=0,sumy=0,sumt=0;
	cin>>n;
	while(i<=n)
	{
		int j,y,t;
		cin>>j>>y>>t;
		sumj=j+sumj;
		sumy=y+sumy;
		sumt=t+sumt;
		i++;
	}
	printf("%d %d %d %d",sumj,sumy,sumt,sumj+sumy+sumt);
}
