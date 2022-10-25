#include<iostream.h>
int main()
{
	int a[100];
	int i,n;
	cout<<"Nhap so phan tu cua mang: "; cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
	cout<<"Hien thi gia tri cua mang\n";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}