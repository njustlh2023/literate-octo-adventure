#include <bits/stdc++.h>
using namespace std;
int main()
{
	float x1,y1,x2,y2,x3,y3;
	double a,b,c,s,area;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	c=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<fixed<<setprecision(2)<<area;
	return 0;
}
