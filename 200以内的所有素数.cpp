#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n,count=0;
	for(n=100;n<200;n++)
	{
		int i;
		for(i=2;i<n;i++) if(n%i==0) break;
		if(i==n) 
		{
			cout<<setw(4)<<n;
			count++;
			if(count%10==0) cout<<"\n";
		}
		
	}
    return 0;
}

