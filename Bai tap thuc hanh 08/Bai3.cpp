#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#define max 50
void nhap(int a[max][max], int m, int n)
{
	for(int i=0; i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"a["<<i<<"]["<<j<<"]= ";
			cin>>a[i][j];
		}
	}
}
void xuat(int a[max][max], int m, int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<setw(6)<<a[i][j];
		}
		cout<<endl;
	}
}
int tongmang(int a[max][max], int m, int n)
{
	int tong=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0; j<m;j++)
		{
			tong+=a[i][j];
		}
		cout<<endl;
	}
	return tong;
}
int main()
{
	int a[max][max], m,n;
	cout<<"Nhap so hang:"; cin>>m;
	cout<<"Nhap so cot:"; cin>>n;
	nhap(a,m,n);
	cout<<"Ma tran moi nhap la:"<<endl;
	xuat(a,m,n);
	cout<<"Tong mang la: "<<tongmang(a,m,n)<<endl;
	return 0;
}