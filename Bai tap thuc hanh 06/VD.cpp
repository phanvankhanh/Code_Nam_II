#include<iostream.h>
#include<conio.h>
int giaithua( int );
int main()
{
	int n;
	cout<<"Nhap gia tri cua n: "; cin>>n;
	cout<<"gia tri gia thua la:"<<giaithua(n)<<endl;
}
int giaithua(int n)
{
	if(n==0 || n==1)
		return 1;
	else 
		return n*giaithua(n-1);
}