#include<iostream.h>
#include<conio.h>
int sodautien(int n)
{
	if(n/10==0)
		return n;
	else 
		return sodautien(n/10);
}

int main()
{
	int n;
	cout<<"Nhap n: "; cin>>n;
	cout<<"So nguyen dau tien la: "<<sodautien(n)<<endl;
	return 0;
}