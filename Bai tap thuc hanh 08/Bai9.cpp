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
void sohoanthiendCP(int a[max][max], int m, int n)
{
	
}
int SolonnhatdCC(int a[max][max], int m, int n)
{

	for(int i=0;i<m;i++)
	{
		int Max=a[0][0];
		for(int j=0;j<n;j++)
		{
			if(a[i][j]>Max)
			{
				Max=a[i][j];
			}
			
		}
		return Max;
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
	cout<<"So lon nhat la: "<<SolonnhatdCC(a,m,n);
	
}