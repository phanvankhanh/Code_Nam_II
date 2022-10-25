#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int main()
{
	int a,b,*p1,*p2;
	p1=&a;
	p2=&b;
	cout<<"Nhap a: "; cin>>a;
	cout<<"Nhap b: "; cin>>b;
	if(*p1==0)
	{
		if(*p2==0)
		{
			cout<<"Phuong trinh co vo so nghiem."<<endl;
		}
		else 
		{
			cout<<"Phuong trinh vo nghiem."<<endl;
		}
	}
	else 
	{
		cout<<"Phuong trinh co nghiem duy nhat la: "<<"x = "<<(-(float)*p2/ *p1)<<endl;
	}
	return 0;
}