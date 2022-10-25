#include<iostream.h>
#include<string.h>
#include<stdio.h>
int main()
{
	int a[5];
	int *p=a;
	cout<<"Nhap 5 so nguyen: "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"nhap phan tu thu: "<<i+1<<endl;
		cin>>*(p+i);
	}
	cout<<"Cac phan tu vua nhap la: "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<" "<<endl;
	}
	return 0;
}