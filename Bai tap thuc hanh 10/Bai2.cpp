#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int main()
{
	int i,j;
	int *p,*q;
	p=&i;
	q=&j;
	cout<<"in ra dia chi cua bien i: "<<p<<endl;
	cout<<"in ra dia chi cua bien j: "<<q<<endl;
	i=2;
	*q=5;//gan gia tri cua j=5 thong qua con tro q
	cout<<"gia tri cua bien j "<<*q<<endl;
	i++;
	cout<<"dia chi cua bien i: "<<p<<endl;
	cout<<"gia tri cua bien i: "<<i<<endl;
	(*q)++;
	cout<<"gia tri cua j: "<<j<<endl;
	//thay doi gia tri cua bien i thong qua bien p
	(*p)=(*q)*2+1;
	cout<<"gia tri cua i la: "<<i<<endl;
}