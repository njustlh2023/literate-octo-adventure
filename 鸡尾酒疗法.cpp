#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,i=1,j1,j2;
	double j;
	cin>>n;
	cin>>j1>>j2;
	j=j2*1.0/j1;
	while(i<=(n-1))
	{
		int g1,g2;
		cin>>g1>>g2;
		double g;
		g=g2*1.0/g1;
		if(j-g>0.05) cout<<"worse\n";
		else if(g-j>0.05) cout<<"better\n";
		else cout<<"same\n";
		i=i+1;
	}
    return 0;
}

