#include<iostream.h>
#include<conio.h>
int main()
{
	int n;
	cout<<"Nhap n: "; cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}