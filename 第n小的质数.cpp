#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,count=0;
	cin>>n;
	for(int num=2;;num++)
	{
		int flag=1;
		for(int k=2;k<=(int)sqrt(num);k++)
		{
			if(num%k==0) flag=0;
			
		}
		if(flag=1) count++;
		if(count==n)
		{
			count<<num;
			break;
		}
	}
	return 0;
}
