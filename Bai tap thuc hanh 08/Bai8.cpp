#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#define max 100
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
int tbc( int a[max][max], int m, int n)
{
	int tong=0,dem=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]>=10 && a[i][j]<=100)
			{
				tong=tong+a[i][j];
				dem=dem+1;
			}
		}
	}
	cout<<"Trung binh cong cac phan tu co gia tri trong doan tu [10;100] la: "<<(float)tong/dem<<endl;
}
void sapxep(int a[max][max], int m, int n)
{
	int tg;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			
		}
	}
}
int main()
{
	int a[max][max], m,n;
	cout<<"Nhap so hang:"; cin>>m;
	cout<<"Nhap so cot:"; cin>>n;
	nhap(a,m,n);
	cout<<"Ma tran moi nhap la:"<<endl;
	xuat(a,m,n);
	tbc(a,m,n);
}