#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double n;
	cin>>n;
	if(n>=0) cout<<fixed<<setprecision(2)<<n;
	else cout<<fixed<<setprecision(2)<<-n;
	return 0; 
}
