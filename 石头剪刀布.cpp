 #include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
   int n,na,nb,a[110],b[110],sum1=0,sum2=0;
    cin>>n>>na>>nb;
	for(int i=0;i<na;i++){
		cin>>a[i];
	}
	for(int j=0;j<nb;j++){
		cin>>b[j];
	}
	for(int i=na;i<n;i++){
		a[i]=a[i%na];
     }
     for(int j=nb;j<n;j++){
        b[j]=b[j%nb];}
	for(int i=0;i<n;i++){
		if((a[i]==0&&b[i]==2)||(a[i]==2&&b[i]==5)||(a[i]==5&&b[i]==0)){
			sum1++;
		}
		else if((b[i]==0&&a[i]==2)||(b[i]==2&&a[i]==5)||(b[i]==5&&a[i]==0)){
			sum2++;
		}
	}
	if(sum1>sum2){
		cout<<"A";
		return 0;
	}
	if(sum1<sum2){
		cout<<"B";
		return 0;
	}
	else{
		cout<<"draw";
		return 0;
	}
	return 0;
}
