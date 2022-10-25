#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void doicho(int *x, int *y)
{
	int tg=*x;
	*x+*y;
	*y=tg;
}
int main()
{
	int a,b,*ptra,*ptrb;
	cout<<"nhap a: ";
	cin>>a;
	cout<<"nhap b: ";
	cin>>b;
	ptra=&a;
	ptrb=&b;
	int sum;
	sum=*ptra+*ptrb;
	cout<<"tong hai so la: "<<sum<<endl;
	doicho(&a,&b);
	cout<<"gia tri sau hoan doi la: "<<endl;
	cout<<"a= "<<a<<" b= "<<b<<endl;
	return 0;
	
}