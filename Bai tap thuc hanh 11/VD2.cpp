#include<iostream>
#include<string.h>
#include<stdio.h>
#define maxhs 3
#define maxlen 3
int *maxA(int b[], int n)
{
	int *max=b;//cho con tro nam lay phan tu dau tien &b[0];
	for(int i=0;i<n;i++)
	{
		if(*(max)<*(max+i))
		{
			*max=*(max+i);
			return max;
		}
	}
}
int main()
{
	int n;
	cout<<"nhap kich thuoc n"<<endl;
	cin>>n;
	int a[n],i;
	int *p=a;//khai bao khoi tao con tro p nam lay dau cua mang a
	for(int i=0;i<n;i++)
	{
		cout<<"nhap phan tu thu: "<<i+1<<endl;
		cin>>*(p+i);
	}
	cout<<"in ra cac so vua nhap"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" "<<endl;
		int *(max)=maxA(a,n);
		cout<<"Gia tri lon nhat cua mang a= "<<max<<endl;
	}
	return 0;
}
