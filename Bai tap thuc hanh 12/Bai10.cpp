#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
using namespace std;
typedef struct
{
	char masach[10];
	char tentg[30];
	char tensach[15];
	int sotrang;
	int namxb;
}sach;
void nhap(sach s[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin.ignore();
		cout<<"Nhap vao cuon sach thu "<<i+1<<endl;
		cout<<"Nhap ten sach: "; cin.getline(s[i].tensach,15);
		cout<<"Nhap ma sach: "; cin.getline(s[i].masach,10);
		cout<<"Nhap so trang: "; cin>>s[i].sotrang;
		cout<<"Nhap ten tac gia: "; cin.getline(s[i].tentg,30);
		cout<<"Nhap nam xuat ban: "; cin>>s[i].namxb;
	}
}
void xuat(sach s[], int n)
{
		cout<<"\n\n\t\t\t\t--DANH SACH CUON SACH--"<<endl;
		cout<<setw(15)<<"Ten sach";
		cout<<setw(10)<<"Ma sach";
		cout<<setw(5)<<"So trang";
		cout<<setw(15)<<"Ten tac gia";
		cout<<setw(10)<<"Nam xuat ban"<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<setw(15)<<s[i].tensach;
			cout<<setw(10)<<s[i].masach;
			cout<<setw(5)<<s[i].sotrang;
			cout<<setw(15)<<s[i].tentg
			cout<<setw(10)<<s[i].namxb<<endl;
		}
}
void hienthi(sach s[], int n)
{
	for(int i=0;i<n;i++)
	{
		if(s[i].tentg=="Nguyen Van Anh")
		{
			cout<<"\n\n\t\t\t\t--DANH SACH CUON SACH--"<<endl;
		cout<<setw(15)<<"Ten sach";
		cout<<setw(10)<<"Ma sach";
		cout<<setw(5)<<"So trang";
		cout<<setw(15)<<"Ten tac gia";
		cout<<setw(10)<<"Nam xuat ban"<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<setw(15)<<s[i].tensach;
			cout<<setw(10)<<s[i].masach;
			cout<<setw(5)<<s[i].sotrang;
			cout<<setw(15)<<s[i].tentg
			cout<<setw(10)<<s[i].namxb<endl;
		}
	}
}
int main()
{
	int n;
	sach s[50];
	cout<<"Nhap so cuon sach: "; cin>>n;
	nhap(s,n);
	xuat(s,n);
	hienthi(s,n);
}