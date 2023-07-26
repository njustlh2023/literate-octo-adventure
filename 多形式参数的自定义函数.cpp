#include <iostream>
#include <cmath>
using namespace std;
int max_2(int a,int b)
{
	int t;
	if(a>=b) t=a;
	else t=b;
	return t;
}
int main()
{
	int num1,num2;
	cin>>num1>>num2;// 300 500
	// max_2(num1,num2); 效果相当于500，一个具体值；(对于有返回值可以作为表达式一部分或者参数)
	// result= max_2(num1,num2);
	//cout<<result; 或者printf（“%d”，max_2(num1,num2)）； 
	return 0;
}
