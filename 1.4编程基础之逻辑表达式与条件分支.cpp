#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	int wei,fee;
	char ch;
	cin>>wei>>ch;
	if(wei<=1000)
	{
		fee=8;
	}
	else
	{
		fee=(wei-1000)/500*4+8;
		if((wei-1000)%500!=0) fee=fee+4; 
	 } 
	 if(ch=='y') fee=fee+5;
	 cout<<fee;
	return 0;
}
