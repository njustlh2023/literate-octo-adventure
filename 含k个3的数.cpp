#include <iostream>
using namespace std;
int main()
{
	long long m;
	int i=0,k;	
	cin>>m>>k;
	if(m%19!=0) cout<<"NO";
	else
	{
		while(true)
		{
			if(m%10==3) i++;
			m=m/10;
			if(m==0) break;
		}
		if(i==k) cout<<"YES";
		else cout<<"NO";
	}
	return 0;
}
