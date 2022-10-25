#include<iostream.h>
#include<conio.h>
int gt(int );
int main()
{
	int n;
	cout<<"Nhap n: "; cin>>n;
	cout<<"Giai thua cua "<<n<<" la: "<<gt(n)<<endl;
	return 0;
}
int gt(int x)
{
	int giaithua=1;
	for(int i=1;i<=x;i++)
		giaithua=giaithua*i;
	return giaithua;
}