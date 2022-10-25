#include<iostream.h>
#include<conio.h>
int main()
{
	int gt=1;
	cout<<"nhap n: "<<endl;
	int n;
	cin>>n;
	for(int j=1;j<=n;j++)
		gt=gt*j;
	cout<<"Gia tri giai thua la: "<<gt<<endl;
}
