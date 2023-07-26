#include<iostream>
#include<iomanip>
#define pi 3.1415926535897932384636//引入符号常量进行转换 （隐式转换） 
using namespace std;
int main()
{
	float r,h;
	double s1,s2,s;
	cin>>r>>h;
	s1=pi*r*r;
	s2=2*pi*r*h;
	s=2*s1+s2;
	cout<<"圆柱体表面积为"<<fixed<<setprecision(2)<<s; 
	return 0;
}
