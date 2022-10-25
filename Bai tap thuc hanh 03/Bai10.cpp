#include<iostream.h>
int main()
{
	int n;
	long s=0;
	cout<<"Nhap vao n: "; cin>>n;
	for(int i=1;i<=n;i++)
	{
		s=s+i*i;
		cout<<"i="<<i<<endl;
	}
	cout<<"Tong la S: "<<s<<endl;
	return 0;
}