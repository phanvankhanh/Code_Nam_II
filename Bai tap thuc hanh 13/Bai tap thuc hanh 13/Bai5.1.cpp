#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
using namespace std;
typedef struct
{
	char ID[15];
	char tensv[30];
	int tuoi;
	float diemHK1;
	float diemHK2;
	float diemTB;
}sinhvien;
void nhap(sinhvien sv[], int n)
{
	for(int i=0;i<n;i++)
	{
		cin.ignore();
		cout<<"nhap sinh vien thu "<<i+1<<endl;
		cout<<"Ho va ten: "; cin.getline(sv[i].tensv,30);
		cout<<"ID: "; cin.getline(sv[i].ID,15);
		cout<<"Diem tong ket ki 1: "; cin>>sv[i].diemHK1;
		cout<<"Diem tong ket ki 2: "; cin>>sv[i].diemHK2;
	}
}
void xuat(sinhvien sv[], int n)
{
		cout<<"\n\n\t\t\t\t--DANH SACH SINH VIEN--"<<endl;
		cout<<setw(30)<<"Ho va ten";
		cout<<setw(15)<<"ID";
		cout<<setw(20)<<"Diem ki 1";
		cout<<setw(20)<<"Diem ki 2"<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<setw(30)<<sv[i].tensv;
			cout<<setw(15)<<sv[i].ID;
			cout<<setw(20)<<sv[i].diemHK1;
			cout<<setw(20)<<sv[i].diemHK2<<endl;
		}
}
void dtb(sinhvien sv[], int n,int &S)
{
	for(int i=0;i<n;i++)
	{
		sv[i].diemTB=(sv[i].diemHK1+sv[i].diemHK2)/2;
		S+=sv[i].diemTB;
	}
}
float diemtblop(sinhvien sv[], int n, int&S)
{
	dtb(sv,n,S);
	float P;
	P=S/n;
	return P;
}
void max(sinhvien sv[],int n,int &S){
    dtb(sv,n,S);
    int tg[1],x;
    for(int i=1;i<=n;i++){
        if(sv[i].diemTB > tg[1]){
            tg[1] = sv[i].diemTB;
            i = x;
        }
    }
    cout<<"Sinh viên Co Diem Tong Ket Cao Nhat : "<<x<<endl;
}
int main()
{
	int n,S;
	sinhvien sv[50];
	cout<<"Nhap so sinh vien: "; cin>>n;
	nhap(sv,n);
    cout<<"Diem Trung Binh Cuoi Nam Ca Lop : "<<diemtblop(sv,n,S)<<endl;
    max(sv,n,S);
	return 0;
}