#include<iostream>  
#include<cmath> 
using namespace std;
int main()
{
	int n;
	int ge,shi,bai,qian,sum;
	cin>>n;
	ge=n%10;
	shi=n%100/10;
	bai=n/100%10;
	qian=n/1000;
	sum=ge+shi+bai+qian;
	cout<<sum;
	return 0;
}	
