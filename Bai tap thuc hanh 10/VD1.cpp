#include<conio.h>
#include<iostream.h>
#include<stdio.h>
int main()
{
	int a;
	int *ptr_a;
	ptr_a=&a;
	cout<<"dia chi cua bien a"<<ptr_a<<endl;
	ptr_a++;
	cout<<"dia chi cua bien a "<<ptr_a<<endl;
	a=5;
	*ptr_a=a;
	cout<<"gia tri cua bien a "<<*ptr_a<<endl;
	*ptr_a++;
	cout<<"gia tri cua bien a la: "<<a<<endl;
	return 0;
}