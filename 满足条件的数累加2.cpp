
#include <iostream>
using namespace std;
int main()
{
	int m, n;
	cin >> m >> n;
	int sum = 0;	
	for (;m <= n;m = m + 1)
	{
		if (m % 17 == 0)
		{
			sum = sum + m;	
		}
	}
	cout << sum << endl;
	return 0;
}
