//tinh tong

#include<iostream.h>
#include<conio.h>
long tong(int n)
{
	if(n==0)
		return 0;
	else 
		return tong(n-1)+n;
}
int main()
{
	int n;
	cout<<"Nhap n:"; cin>>n;
	cout<<"tong cua 1+2+3+...+n = "<<tong(n)<<endl;
}