#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
using namespace std;
typedef struct
{
	char mamh[15];
	char tenmh[15];
	int soluong;
	float dongia;
	float thanhtien;
}mathang;
void nhap(mathang mh[], int n)
{
	for(int i=0;i<n;i++)
	{
		cin.ignore();
		cout<<"nhap mat hang thu "<<i+1<<endl;
		cout<<"Ten mat hang: "; cin.getline(mh[i].tenmh,15);
		cout<<"Ma mat hang: "; cin.getline(mh[i].mamh,15);
		cout<<"So luong: "; cin>>mh[i].soluong;
		cout<<"Don gia: "; cin>>mh[i].dongia;
	}
}
void tinhtien(mathang mh[],int n)
{
	for(int i=0;i<n;i++)
	{
	  mh[i].thanhtien=mh[i].soluong*mh[i].dongia;
	}
}
void xuat(mathang mh[], int n)
{
		cout<<"\n\n\t\t\t\t--DANH SACH MAT HANG--"<<endl;
		cout<<setw(30)<<"Ten mat hang";
		cout<<setw(15)<<"Ma mat hang";
		cout<<setw(15)<<"So luong";
		cout<<setw(15)<<"Don gia";
		cout<<setw(15)<<"Thanh tien"<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<setw(30)<<mh[i].tenmh;
			cout<<setw(15)<<mh[i].mamh;
			cout<<setw(15)<<mh[i].soluong;
			cout<<setw(15)<<mh[i].dongia;
			cout<<setw(15)<<mh[i].thanhtien<<endl;
		}
}
void slduoi50(mathang mh[], int n)
{
	cout<<"\n\n\t\t\t\t--DANH SACH MAT HANG CO SO LUONG DUOI 50 --"<<endl;
		cout<<setw(30)<<"Ten mat hang";
		cout<<setw(15)<<"Ma mat hang";
		cout<<setw(15)<<"So luong";
		cout<<setw(15)<<"Don gia";
		cout<<setw(15)<<"Thanh tien"<<endl;
		for(int i=0;i<n;i++)
		{
			if(mh[i].soluong<50)
			{
				cout<<setw(30)<<mh[i].tenmh;
				cout<<setw(15)<<mh[i].mamh;
				cout<<setw(15)<<mh[i].soluong;
				cout<<setw(15)<<mh[i].dongia;
				cout<<setw(15)<<mh[i].thanhtien<<endl;
			}
		}
}
int main()
{
	mathang mh[50];
	int n;
	cout<<"Nhap vao so mat hang: "; cin>>n;
	nhap(mh,n);
	tinhtien(mh,n);
	xuat(mh,n);
	slduoi50(mh,n);
	return 0;
}