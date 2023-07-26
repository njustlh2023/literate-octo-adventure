#include <iostream>
#include <cmath>
using namespace std;
void eqa(double a,double b,double c)
{
	double delt,root1,root2;
	delt=b*b-4*a*c;
	if(delt>0)
	{
		root1=(-b+sqrt(delt))/(2*a);
		root2=(-b-sqrt(delt))/(2*a);
		printf("root1:%.2lf,root2:%.2lf",root1,root2);
	}
	else if(delt=0) printf("root=root2:%.2lf",-b/(2*a));
	else cout<<"nan";
 } 
int main()
{
	double num1,num2,num3;
	cin>>num1>>num2>>num3;
	eqa(num1,num2,num3);
	return 0;
}
