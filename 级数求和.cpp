#include <iostream>
using namespace std;
int main()
{
	int k,n;
	double num=0;
	cin>>k;
	for(n=1;;n++)
	{
		num=num+(1.0/n);
		if(num>k) break;
	}
	cout<<n;
	return 0;
}
