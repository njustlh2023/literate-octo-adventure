#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	int f;
	cin>>f;
	if(f%(3*5*7)==0) cout<<"3 5 7";//分别可以3,5,7 
	else if(f%15==0) cout<<"3 5";
	else if(f%21==0) cout<<"3 7";
	else if(f%35==0) cout<<"5 7";
	else if(f%3==0) cout<<3;
	else if(f%5==0) cout<<5;
	else if(f%7==0) cout<<7;
	else cout<<'n';
	return 0;
}
 
