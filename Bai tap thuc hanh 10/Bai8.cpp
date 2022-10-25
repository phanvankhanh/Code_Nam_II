#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int main()
{
	int *p=new int(100);
	p[0]=1;
	*(p+1)=2;
	cout<<p[0];
	cout<<p[1];
	delete p;
	return 0;
}