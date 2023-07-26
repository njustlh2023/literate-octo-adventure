#include <bits/stdc++.h>
#define pi 3.14
using namespace std;
int main()
{
	int n,x,y;
	cin>>n>>x>>y;
	cout<<(y%x==0?n-y/x:n-y/x-1);
}
