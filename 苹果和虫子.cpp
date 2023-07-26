#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a,b;
	char ch;
	scanf("%d%d",&a,&b);
	scanf("%c",&ch);//换行读出回车符，那是不是不能换行，必须连着？ 
	printf("a=%d,b=%d,c=%c",a,b,ch);
	return 0;
}
