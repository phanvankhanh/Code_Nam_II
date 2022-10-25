#include<iostream.h>
#include<math.h>
int main()
{
	int n;
	int p=1;
	cout<<"Nhap n: "; cin>>n;
	for(int i=1;i<=n;i++)
	{
		p=p*2*i;
	}
	cout<<"Tich P la: "<<p<<endl;
	return 0;
}