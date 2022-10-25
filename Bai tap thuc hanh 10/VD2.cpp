#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int main()
{
	int a=20;
	int *p;
	p=&a;
	cout<<"dia chi cua bien a: "<<p<<endl;
	cout<<"gia tri cua bien a: "<<a<<endl;
	cout<<"gia tri cua bien a: "<<*p<<endl;
}