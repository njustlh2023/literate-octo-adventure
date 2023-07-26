#include <iostream>
using namespace std;
int main()
{
	int n;
	double t1,t2;
	cin>>n;
	t1=50+n/3.0;
	t2=n/1.2;
	if(t1<t2) cout<<"Bike";
	else if(t1>t2) cout<<"Walk";
	else cout<<"All";
	return 0;
}
