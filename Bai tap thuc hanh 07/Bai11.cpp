#include<iostream.h>
#include<math.h>
void nhap(int b[], int m)
{
	for(int i=0;i<m;i++)
	{
		cout<<"b["<<i<<"]=";
		cin>>b[i];
	}
}
void xuat(int b[], int m)
{
	for(int i=0;i<m;i++)
	{
		cout<<b[i]<<" ";
	}
}
int tong(int b[], int m)
{
	int tong=0;
	for(int i=0; i<m;i++)
	{
		tong=tong+b[i];
	}
	cout<<"Tong so vua nhap la: "<<tong<<endl;
	cout<<"Trung binh cong cua cac so vua nhap la:  "<<(float)tong/m<<endl;
}

int main()
{
	int a[100],n;
	cout<<"Nhap vao phan tu cua mang: "; cin>>n;
	nhap(a,n);
	cout<<"In ra ca phan tu vua nhap: "<<endl;
	xuat(a,n);
	cout<<endl;
	tong(a,n);
	cout<<endl;
}