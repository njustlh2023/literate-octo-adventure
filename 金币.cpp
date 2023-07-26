#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int day,i,size=0,left=0,total=0;
	cin>>day;
	for(i=1;i<=day;i++)
	{
		if(left==0)
		{
			size++;
			left=size;
		}
		total+=size;
		left--;
	}
	cout<<total;
	return 0;
}
