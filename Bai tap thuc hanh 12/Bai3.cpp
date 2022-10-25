#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
using namespace std;
typedef struct
{
	char masv[15];
	char tensv[30];
	float diemlt;
	float diemth;
}sinhvien;
void nhap(sinhvien sv[], int n)
{
	for(int i=0;i<n;i++)
	{
		cin.ignore();
		cout<<"nhap sinh vien thu "<<i+1<<endl;
		cout<<"Ho va ten: "; cin.getline(sv[i].tensv,30);
		cout<<"Ma sinh vien: "; cin.getline(sv[i].masv,15);
		cout<<"Diem li thuyet: "; cin>>sv[i].diemlt;
		cout<<"Diem thuc hanh: "; cin>>sv[i].diemth;
	}
}
void xuat(sinhvien sv[], int n)
{
		cout<<"\n\n\t\t\t\t--DANH SACH SINH VIEN--"<<endl;
		cout<<setw(30)<<"Ho va ten";
		cout<<setw(15)<<"Ma sinh vien";
		cout<<setw(20)<<"Diem li thuyet";
		cout<<setw(20)<<"Diem thuc hanh"<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<setw(30)<<sv[i].tensv;
			cout<<setw(15)<<sv[i].masv;
			cout<<setw(20)<<sv[i].diemlt;
			cout<<setw(20)<<sv[i].diemth<<endl;
		}
}
void dstruot(sinhvien sv[], int n)
{
	cout<<"\n\n\t\t\t\t--DANH SSACH SINH VIEN BI TRUOT LI THUYET--"<<endl;
	cout<<setw(30)<<"Ho va ten";
	cout<<setw(15)<<"Ma sinh vien";
	cout<<setw(20)<<"Diem li thuyet";
	cout<<setw(20)<<"Diem thuc hanh"<<endl;
	for(int i=0;i<n;i++)
	{
		if(sv[i].diemlt<5)
		{
			cout<<setw(30)<<sv[i].tensv;
			cout<<setw(15)<<sv[i].masv;
			cout<<setw(20)<<sv[i].diemlt;
			cout<<setw(20)<<sv[i].diemth<<endl;
		}
	}
}
int main()
{
	int n;
	sinhvien sv[50];
	cout<<"Nhap so sinh vien: "; cin>>n;
	nhap(sv,n);
	xuat(sv,n);
	dstruot(sv,n);
	return 0;
}