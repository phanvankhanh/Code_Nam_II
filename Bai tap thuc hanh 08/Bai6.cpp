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
int
 kttsl(int a[max][max], int m, int n)
{
	int kt;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]%2==0)
			{
				cout<<a[i][j]<<"\t";
				return 1;
				cout<<endl;
			}	
		}
	}
	return kt;
}
int main()
{
	int a[max][max], m,n;
	cout<<"Nhap so hang:"; cin>>m;
	cout<<"Nhap so cot:"; cin>>n;
	nhap(a,m,n);
	cout<<"Ma tran moi nhap la:"<<endl;
	xuat(a,m,n);
	cout<<"Kiem tra mang:"<<endl;
	int kt=kttsl(a,m,n);
	if(kt==1)
	{
		cout<<"Mang khong hoan toan la so le."<<endl;
	}
	else 
		cout<<"Mang hoan toan la so le."<<endl;
	return 0;
}