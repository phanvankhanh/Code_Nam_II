#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<math.h>
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
void insoCP(int a[max][max], int m, int n)
{
	float x,y;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			x=sqrt(a[i][j]);
			y=(int)x;
			if(x==y)
			{
				cout<<a[i][j]<<"\t";
			}
		}
	}
}
void vitri(int a[max][max], int m, int n)
{
	int z;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]<0)
			{
				cout<<"Vi tri am dau tien nam o "<<"cot "<<i<<" hang "<<j<<endl;
				cout<<"So am la: "<<a[i][j]<<endl;
			}
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
	cout<<"So chinh phuong la: "<<endl;
	insoCP(a,m,n);
	cout<<endl;
	vitri(a,m,n);
	return 0;
}