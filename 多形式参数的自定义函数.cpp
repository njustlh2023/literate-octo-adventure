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
	// max_2(num1,num2); Ч���൱��500��һ������ֵ��(�����з���ֵ������Ϊ���ʽһ���ֻ��߲���)
	// result= max_2(num1,num2);
	//cout<<result; ����printf����%d����max_2(num1,num2)���� 
	return 0;
}
