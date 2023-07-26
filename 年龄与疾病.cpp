#include <iostream>
#include <iomanip>
using namespace std;
int age[105];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>age[i];
	}
	double count1=0,count2=0,count3=0,count4=0;
	for(int i=1;i<=n;i++)
	{
		if(age[i]<=18) count1++;
		else if(age[i]<=35&&age[i]>=19) count2++;
		else if(age[i]<=60&&age[i]>=36) count3++;
		else count4++;
	}
	double n1,n2,n3,n4;
	n1=count1*100.0/n;
	n2=count2*100.0/n;
	n3=count3*100.0/n;
	n4=count4*100.0/n;
    printf("%.2lf%%\n%.2lf%%\n%.2lf%%\n%.2lf%%\n",n1,n2,n3,n4);
	return 0;
}
