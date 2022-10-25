#include<iostream.h>
#include<conio.h>
int main()
{
	int a,b;
	cout<<"Nhap vao chieu dai: ";
	cin>>a;
	cout<<"Nhap vao chieu rong: ";
	cin>>b;
	for(int i=1;i<=b;i++)
	{
		for(int j=1;j<=a;j++)
			cout<<"*";
		cout<<endl;
	}
}