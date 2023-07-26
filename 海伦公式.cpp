#include<iostream>  //¿âº¯Êý 
#include<cmath> 
using namespace std;
int main()
{
	double a,b,c,s,area;
	cin>>a>>b>>c;
	s=(a+b+c)/2;
	cout<<sqrt(s*(s-a)*(s-b)*(s-c)); 
	return 0;
}	
