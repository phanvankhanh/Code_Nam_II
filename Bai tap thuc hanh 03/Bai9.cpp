#include<iostream.h>
int main()
{
	int n;
	long p=1;
	cout<<"Nhap vao n: "; cin>>n;
	for(int i=1;i<=n;i++)
	{
		p=p*i*2;
		cout<<"i="<<i<<endl;
	}
	cout<<"Tich P = "<<p<<endl;
	return 0;
}