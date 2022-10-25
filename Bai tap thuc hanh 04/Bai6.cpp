#include<iostream.h>
#include<conio.h>
int main()
{
	int n,i;
	int S=0;
	i=1;
	cout<<"Nhap n: ";
	cin>>n;
	while(i<=n)
	{
		S=S+(2*i-1);
		i++;
		cout<<"i= "<<i-1<<endl;
	}
	cout<<"Tong la: "<<S<<endl;
	return 0;
}