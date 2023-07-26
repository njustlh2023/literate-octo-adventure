#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<=9;i++)//循环一次，处理一行。
	{
		for(j=1;j<=9;j++)
		{
			if(i+j<10) cout<<"       ";
			else printf("%d*%d=%-3d",i,j,i*j);
		}
		cout<<'\n';
	 } 
	 return 0;
}

