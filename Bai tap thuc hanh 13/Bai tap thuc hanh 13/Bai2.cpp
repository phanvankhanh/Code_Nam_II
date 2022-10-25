#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
typedef struct
{
	int ng;
	int th;
	int nam;
}ngaythang;
typedef struct
{
	char hoten[30];
	ngaythang ns;
	char gt[8];
	float diem;
	
}sinhvien;
sinhvien lop[3];
void nhap(sinhvien *p)
{
	cout<<"Ho ten: "<<endl;
	cin.ignore();
	cin.getline(p->hoten,30);
	cout<<"Ngay sinh: ";
	cin>>(p->ns).ng>>(p->ns).th>>(p->ns).nam;
	cout<<"Gioi tinh: "<<endl;
	cin.ignore();
	cin.getline(p->gt,8);
	cout<<"Diem: "<<endl;
	cin>>p->diem;
}
void nhapds(sinhvien *a)
{
	int sosv = sizeof(lop)/sizeof(sinhvien);
	for(int i=1;i<=sosv;i++)
	{
		nhap(&a[i]);
	}
}
void in(sinhvien x)
{
	cout<<x.hoten<<"\t";
	cout<<x.ns.ng<<"/"<<x.ns.th<<"/"<<x.ns.nam<<"\t";
	cout<<x.gt<<"\t";
	cout<<x.diem<<endl;
}
void inds(sinhvien *a)
{
	int sosv = sizeof(lop)/sizeof(sinhvien);
	for(int i=1;i<sosv;i++)
	{
		in(a[i]);
	}
}
void sua(sinhvien &b)
{
	int luachon;
	do{
		cout<<"1.Sua ho ten"<<endl;
		cout<<"2.Sua ngay sinh"<<endl;
		cout<<"3.Sua gioi tinh"<<endl;
		cout<<"4.Sua diem"<<endl;
		cout<<"0.Thoi"<<endl;
		cin>>luachon;
		cin.ignore();
		switch(luachon)
		{
			case 1: cin.getline(b.hoten,30);
			break;
			case 2: cin>>b.ns.ng>>b.ns.th>>b.ns.nam;
			break;
			case 3: cin>>b.gt;
			break;
			case 4: cin>>b.diem;
			break;
		}
	}
	while(luachon);
}
void suads(sinhvien *a)
{
	int n;
	cout<<"chon sinh vien can sua: ";
	cin>>n;
	sua(a[n]);
}
int main()
{
	sinhvien sv[50];
	int n;
	cout<<"Nhap so sinh vien: ";
	cin>>n;
	nhapds(sv);
	inds(sv);
	suads(sv);
	inds(sv);
	return 0;
}