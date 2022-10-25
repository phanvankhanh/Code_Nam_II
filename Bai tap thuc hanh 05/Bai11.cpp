#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<iomanip.h>
using namespace std;
struct nhanvien
{
	char hoten[15];
	float lcb;
	int heso;
	long phucap;
	long tongluong;
	long luong;
	int n;
};
nhanvien nv[3];
void nhap(nhanvien nv[], int &n)
{
	cout<<"Nhap so nhan vien: "; cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin.ignore();
		cout<<"Nhap thong tin nhan vien thu "<<i<<"\n";
		cout<<"Ho va ten: "; cin.getline(nv[i].hoten,15);
		cout<<"Luong co ban: "; cin>>nv[i].lcb;
		cout<<"He so luong: "; cin>>nv[i].heso;
		fflush(stdin);
	}
}
void tinhluong(nhanvien nv[], int &n)
{
	for(int i=1;i<=n;i++)
	{
		nv[i].luong=nv[i].lcb*nv[i].heso;
		cout<<"Luong cua nhan vien la: "<<nv[i].luong<<endl;
	}
}
void luongphucap(nhanvien nv[], int &n)
{
	for(int i=1;i<=n;i++)
	{
		nv[i].phucap=nv[i].luong*25/100;
		cout<<"Phu cap cua nhan vien la: "<<nv[i].phucap<<endl;
	}
}
void tinhtongluong(nhanvien nv[], int &n)
{
	for(int i=1;i<=n;i++)
	{
		nv[i].tongluong=nv[i].luong+nv[i].phucap;
		cout<<"Tong luong cua nhan vien la: "<<nv[i].tongluong<<endl;
	}
}
int main()
{
	int n;
	nhap(nv,n);
	tinhluong(nv,n);
	luongphucap(nv,n);
	tinhtongluong(nv,n);
}