#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n,sum=0,i=1;
	cin>>n;
	while(i<=n)
	{
		int age; //局部变量
		cin>>age;
		sum=sum+age;
		i=i+1;
	}
	printf("%.2lf",(double)sum/n);
	return 0;
}
