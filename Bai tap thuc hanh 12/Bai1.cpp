#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
using namespace std;
typedef struct
{
	char masp[15];
	char tensp[15];
	int soluong;
	float dongia;
}sanpham;
void nhap(sanpham sp[], int n)
{
	for(int i=0;i<n;i++)
	{
		cin.ignore();
		cout<<"nhap san pham thu "<<i+1<<endl;
		cout<<"Ten san pham: "; cin.getline(sp[i].tensp,15);
		cout<<"Ma san pham: "; cin.getline(sp[i].masp,15);
		cout<<"So luong: "; cin>>sp[i].soluong;
		cout<<"Don gia: "; cin>>sp[i].dongia;
	}
}
void xuat(sanpham sp[], int n)
{
		cout<<"\n\n\t\t\t\t--DANH SACH SAN PHAM--"<<endl;
		cout<<setw(30)<<"Ten san pham";
		cout<<setw(15)<<"Ma san pham";
		cout<<setw(15)<<"So luong";
		cout<<setw(15)<<"don gia"<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<setw(30)<<sp[i].tensp;
			cout<<setw(15)<<sp[i].masp;
			cout<<setw(15)<<sp[i].soluong;
			cout<<setw(15)<<sp[i].dongia<<endl;
		}
}
void giaban(sanpham sp[], int n)
{
	cout<<"\n\n\t\t\t\t--SAN PHAM CO GIA BAN <20000--"<<endl;
	cout<<setw(30)<<"Ten san pham";
	cout<<setw(15)<<"Ma san pham";
	cout<<setw(15)<<"So luong";
	cout<<setw(15)<<"don gia"<<endl;
	for(int i=0;i<n;i++)
	{
		if(sp[i].dongia<=20000)
		{
			cout<<setw(30)<<sp[i].tensp;
			cout<<setw(15)<<sp[i].masp;
			cout<<setw(15)<<sp[i].soluong;
			cout<<setw(15)<<sp[i].dongia<<endl;
		}
	}
}
int main()
{
	sanpham sp[20];
	int n;
	cout<<"Nhap vao so san pham: "; cin>>n;
	nhap(sp,n);
	xuat(sp,n);
	giaban(sp,n);
}