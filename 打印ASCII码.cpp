#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char ch='A';
	int n=ch;//隐式转换 字符型换成整型
	cout<<n; // A=65 B =66  C=67      a=65+32=97    0=48  1=49 2=50 
	return 0;
}	
