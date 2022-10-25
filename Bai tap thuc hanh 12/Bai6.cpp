#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
using namespace std;
typedef struct
{
	char manv[15];
	char tennv[30];
	long luong;
	float phucap;
	long tongluong;
}nhanvien;
void nhap(nhanvien nv[], int n)
{
	for(int i=0;i<n;i++)
	{
		cin.ignore();
		cout<<"Nhap nhan vien thu "<<i+1<<endl;
		cout<<"Ho va ten: "; cin.getline(nv[i].tennv,30);
		cout<<"Ma nhan vien: "; cin.getline(nv[i].manv,15);
		cout<<"Luong: "; cin>>nv[i].luong;
	}
}
void xuat(nhanvien nv[], int n)
{
		cout<<"\n\n\t\t\t\t--DANH SACH NHAN VIEN--"<<endl;
		cout<<setw(30)<<"Ho va ten";
		cout<<setw(15)<<"Ma sinh vien";
		cout<<setw(20)<<"Luong";
		cout<<setw(20)<<"Phu cap";
		cout<<setw(20)<<"Tong luong"<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<setw(30)<<nv[i].tennv;
			cout<<setw(15)<<nv[i].manv;
			cout<<setw(20)<<nv[i].luong;
			cout<<setw(20)<<nv[i].phucap;
			cout<<setw(20)<<nv[i].tongluong<<endl;
		}
}
void tinhphucap(nhanvien nv[], int n)
{
	for(int i=0;i<n;i++)
	{
		 float(nv[i].phucap=nv[i].luong*25/100);
	}
}
void tinhluong(nhanvien nv[], int n)
{
	for(int i=0;i<n;i++)
	{
		nv[i].tongluong=nv[i].luong+nv[i].phucap;
	}
}
void sapxep(nhanvien nv[], int n)
{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				nhanvien tg;
				if(nv[i].tongluong>nv[j].tongluong)
				{
					tg=nv[i];
					nv[i]=nv[j];
					nv[j]=tg;
				}
			}
		}
		cout<<"\n\n\t\t\t\t--DANH SACH NHAN VIEN SAU SAP XEP--"<<endl;
		cout<<setw(30)<<"Ho va ten";
		cout<<setw(15)<<"Ma sinh vien";
		cout<<setw(20)<<"Luong";
		cout<<setw(20)<<"Phu cap";
		cout<<setw(20)<<"Tong luong"<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<setw(30)<<nv[i].tennv;
			cout<<setw(15)<<nv[i].manv;
			cout<<setw(20)<<nv[i].luong;
			cout<<setw(20)<<nv[i].phucap;
			cout<<setw(20)<<nv[i].tongluong<<endl;
		}
}
int main()
{
	int n;
	nhanvien nv[50];
	cout<<"Nhap so nhan vien: "; cin>>n;
	nhap(nv,n);
	tinhphucap(nv,n);
	tinhluong(nv,n);
	xuat(nv,n);
	sapxep(nv,n);
	return 0;
}