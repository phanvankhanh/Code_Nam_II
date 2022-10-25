#include<iostream.h>
#include<string.h>
#include<stdio.h>
#define max 3
int main()
{
	int a[max]={10,100,200};
	int *ptr[max];
	for(int i=0;i<max;i++)
	{
		ptr[i]=&a[i];
	}
	for(int i=0;i<max;i++)
	{
		cout<<"gia tri cua a[" << i << "]= ";
		cout<<ptr[i]<<endl;
	}
	return 0;
}