#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
#define pi 3.14
int main()
{
    double r,v;
    cin>>r;
    v=4.0/3*pi*pow(r,3);
    cout<<fixed<<setprecision(2)<<v;
	return 0; 
 } 
