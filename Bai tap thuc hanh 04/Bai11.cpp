#include<iostream.h>
#include<conio.h>
int main()
{
	int n,i;
	cout<<"Nhap n: ";
	cin>>n;
	long s=0;
	i=1;
	while(i<=n)
	{
		s=s+i*i;
		i++;
	}
	cout<<"Tong S la: "<<s<<endl;
}