#include<iostream.h>
#include<iomanip.h>
void nhap(int b[], int m)
{
	for(int i=0; i<m;i++)
	{
		cout<<"b["<<i<<"]="; cin>>b[i];	
	}
		
}
void xuat(int b[], int m)
{
	for(int i=0; i<m;i++)
	{
		cout<<b[i]<<" ";
	}
}
int main()
{
	int a[100],n,k;
	cout<<"Nhap so phan tu mang: "; cin>>n;
	nhap(a,n);
	cout<<"nhap so k: "; cin>>k;
	for(int i=k;i<n;i++)
	{
		a[i]=a[i+1];
	}
	cout<<"Mang sau khi xoa la: "<<endl;
	xuat(a,n);
	return 0;
}