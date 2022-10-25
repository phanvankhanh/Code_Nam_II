#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int main()
{
	int a,b,c,*p1,*p2,*p3;
	p1=&a;
	p2=&b;
	p3=&c;
	cout<<"Nhap a: "; cin>>a;
	cout<<"Nhap b: "; cin>>b;
	cout<<"Nhap c: "; cin>>c;
	if(*p1>*p2)
	{
		if(*p1>*p3)
		{
			cout<<"so lon nhat la: "<<*p1<<endl;
		}
		else{
			cout<<"so lon nhat la: "<<*p3<<endl;
		}
	}
	else 
	{
		if(*p2>*p3)
		{
			cout<<"so lon nhat la: "<<*p2<<endl;
		}
		else 
		{
			cout<<"so lon nhat la: "<<*p3<<endl;
		}
	}
	return 0;
}