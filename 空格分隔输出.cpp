#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char cha; 
	int in;
	float fl;
	double dou;
	cin>>cha>>in>>fl>>dou;
	cout<<cha<<" "<<in<<" "<<fixed<<setprecision(6)<<fl<<" "<<fixed<<setprecision(6)<<dou;
	return 0;
}	

