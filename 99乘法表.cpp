#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<=9;i++)//ѭ��һ�Σ�����һ�С�
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

