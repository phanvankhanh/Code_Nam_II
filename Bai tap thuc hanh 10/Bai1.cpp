#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int main()
{
	int a=10;
	int *p;
	p=&a;
	cout<<"gia tri cua bien a la: "<<a<<endl;
	cout<<"dia chi luu tru trong bien con tro p la: "<<p<<endl;
	cout<<"gia tri cua con tro p la: "<<*p<<endl;
	return 0;
}