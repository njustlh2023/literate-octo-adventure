#include <iostream>
using namespace std;
int main()
{
	int n,x,y,d;
	cin>>n>>x>>y;
	if(y%x==0) d=n-(y/x);
	else d=n-(y/x)-1;
	cout<<d;
	return 0; 
}
