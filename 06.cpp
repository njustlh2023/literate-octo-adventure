#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n>=10)
	{
		if(n<=99) cout<<1;
		else cout<<0;
	}
	else cout<<0;
	return 0;
}
