#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<math.h>
typedef struct 
{
	char ID[15];
	char Hoten[30];
	int tuoi;
	float diemHK1;
	float diemHK2;
	float diemTB;
}sinhvien;
sinhvien sv[20];
void nhap(sinhvien *p)
{
	cout<<"ID: "; 
	cin.ignore();
	cin.getline(p->ID,15);
	cout<<"Ho ten: ";
	cin.getline(p->Hoten,30);
	cout<<"Tuoi: ";
	cin>>(p->tuoi);
	cout<<"Diem tong ket hoc ki 1: ";
	cin>>(p->diemHK1);
	cout<<"Diem tong ket hoc ki 2: ";
	cin>>(p->diemHK2);
}
void nhapds(sinhvien a[], int n)
{
	for(int i=0;i<n;i++)
	{
		nhap(&a[i]);
	}
}
void diemtrungbinh(sinhvien p)
{
	
	p.diemTB=(p.diemHK1+p.diemHK2)/2;

}
void in(sinhvien p)
{
	cout<<p.ID<<"\t";
	cout<<p.Hoten<<"\t";
	cout<<p.tuoi<<"\t";
	cout<<p.diemHK1<<"\t";
	cout<<p.diemHK2<<"\t";
	cout<<p.diemTB<<endl;
}
void inds(sinhvien a[], int n)
{
	for(int i=0;i<n;i++)
	{
		in(a[i]);
	}
}
int main()
{
	int n;
	cout<<"Nhap so sinh vien: ";
	cin>>n;
	nhapds(sv,n);
	inds(sv,n);
}