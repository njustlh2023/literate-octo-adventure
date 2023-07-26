#include <iostream>
using namespace std;
int main()
{
	int x,y;
	char ch;
	cin>>x>>y>>ch;
	if(ch=='+') cout<<x+y;
	else if(ch=='-') cout<<x-y;
	else if(ch=='*') cout<<x*y;
	else if(ch=='/')
	{
		if(y!=0) cout<<x/y;
		else cout<<"Divided by zero!";
	}
	else cout<<"Invalid operator!";
	return 0;
}
