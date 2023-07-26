#include <iostream>
#include <cmath>
using namespace std;
int f(int a,int b)
{
	if(a%b==0) return b;
	else return f(b,a%b);
}
int main()
{
	int a,b;
	cin>>a>>b;
	if(a<b)
	{
		int t;
		t=b;
		b=a;
		a=t;
	}
	cout<<f(a,b);	
}
 
