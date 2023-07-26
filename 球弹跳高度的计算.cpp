#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double h;
	cin>>h;
	double m=h;
	int i=1;
	while(i<=9)
	{
		
	    m=m*0.5;
	    h=h+m*2;
		i++;
	}
	cout<<h<<endl<<m*0.5;
    return 0;
}
