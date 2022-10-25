#include <iostream.h>
#include<conio.h>
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int s=0;
	for(int i=1;i<=n;i++)
	{
		s=s+(2*i-1);
		cout<<"i="<<i<<endl;
	}
	cout<<"tong S la: "<<s<<endl;
	return 0;
}