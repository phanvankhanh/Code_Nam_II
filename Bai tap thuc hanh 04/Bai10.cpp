#include<iostream.h>
#include<conio.h>
int main()
{
	int n,i;
	long p=1;
	i=1;
	cout<<"Nhap n: ";
	cin>>n;
	while(i<=n)
	{
		p=p*i*2;
		i++;
	}
	cout<<"Tich P la: "<<p<<endl;
	return 0;
}