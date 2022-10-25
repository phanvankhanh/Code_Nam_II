#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#define max 50
void nhap(int a[max][max], int m, int n)
{
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n;j++)
		{
			cout<<"a["<<i<<"]["<<j<<"]= ";
			cin>>a[i][j];
		}
	}
}
void xuat(int a[max][max], int m,int n)
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
void indongle(int a[max][max], int m, int n)
{
	for(int i=0;i<m;i++)
	{
		if(i%2==1)
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<"\t";
		}
	}

}
int main()
{
	int a[max][max], m,n;
	cout<<"Nhap so hang:"; cin>>m;
	cout<<"Nhap so cot:"; cin>>n;
	nhap(a,m,n);
	xuat(a,m,n);
	cout<<"In ra cac phan tu tren dong le"<<endl;
	indongle(a,m,n);
}