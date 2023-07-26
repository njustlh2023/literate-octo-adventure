#include <iostream>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	while(true)
	{
		if(n==1)
		{
			cout<<"End"<<endl;
			break;
		}
		else if(n%2==0)
		{
			cout<<n<<"/2="<<n/2<<endl;
			n=n/2;
		}
		else
		{
			cout<<n<<"*3+1="<<n*3+1<<endl;
			n=n*3+1;
		}
	}
	return 0;
}
