#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a,b;
	double c;
	cin>>a>>b;
	c=b*100.0/a;
	cout<<fixed<<setprecision(3)<<c;
	cout<<"%";
	return 0;
}	
