#include <iostream>
#include <cmath>
using namespace std;
int f(int n)
{
	if(n==0) return 0;
	else if(n==1) return 1;
	else return f(n-1)+f(n-2);
}
int main()
{
	int n;
	cin>>n;
	for(int i;i<=n;i++)
	{
		int a;
		cin>>a;
		cout<<f(a)<<endl;
	}
	cout<<endl;
	return 0;
}
