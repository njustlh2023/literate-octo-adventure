#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int x,y,z;
	cin>>x>>y>>z;
	if(x+y>z&&x-y<z) cout<<"yes";
	else cout<<"no";
	return 0;
}
