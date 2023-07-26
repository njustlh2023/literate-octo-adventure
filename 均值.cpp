#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n,sum=0,i=1;
	cin>>n;
	while(i<=n)
	{
		int a;
		cin>>a;
		sum=sum+a;
		i=i+1;
	}
	printf("%d %.5lf",sum,(double)sum/n);
}
