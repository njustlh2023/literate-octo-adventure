#include <iostream>
#include <cmath>
using namespace std;
int move(int n)
{
	if(n<0) return 0;
	if(n==0) return 1;
	if(n>0) return move(n-1)+move(n-2);
}
int main()
{
    int n;
	while(cin>>n)
	{
		cout<<move(n)<<endl;
	}
	return 0;
}
