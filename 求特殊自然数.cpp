#include <iostream>
using namespace std;
int main()
{
	int n,ge,shi,bai;
	for(n=65;n<=342;n++)
	{
		ge=n%7;
		bai=n/49;
		shi=n/7%7;
		if(n==ge*81+shi*9+bai)
		{
			cout<<n<<endl;
            cout<<n/49<<n/7%7<<n%7<< endl;
            cout<<n/81<<n/9%9<<n%9<< endl; 
		}
	}
	return 0;
}

