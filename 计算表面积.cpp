#include<iostream>
#include<iomanip>
#define pi 3.1415926535897932384636//������ų�������ת�� ����ʽת���� 
using namespace std;
int main()
{
	float r,h;
	double s1,s2,s;
	cin>>r>>h;
	s1=pi*r*r;
	s2=2*pi*r*h;
	s=2*s1+s2;
	cout<<"Բ��������Ϊ"<<fixed<<setprecision(2)<<s; 
	return 0;
}
