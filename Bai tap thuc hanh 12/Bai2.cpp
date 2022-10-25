#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
using namespace std;
typedef struct
{
	char magv[15];
	char tengv[30];
	int somon;
	int hocky;
}giangvien;
void nhap(giangvien gv[], int n)
{
	for(int i=0;i<n;i++)
	{
		cin.ignore();
		cout<<"nhap giang vien thu "<<i+1<<endl;
		cout<<"Ho va ten: "; cin.getline(gv[i].tengv,30);
		cout<<"Ma giang vien: "; cin.getline(gv[i].magv,15);
		cout<<"So mon: "; cin>>gv[i].somon;
		cout<<"Hoc ky: "; cin>>gv[i].hocky;
	}
}
void xuat(giangvien gv[], int n)
{
		cout<<"\n\n\t\t\t\t--DANH SACH GIANG VIEN--"<<endl;
		cout<<setw(30)<<"Ho va ten";
		cout<<setw(15)<<"Ma giang vien";
		cout<<setw(15)<<"So mon";
		cout<<setw(15)<<"Hoc ky"<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<setw(30)<<gv[i].tengv;
			cout<<setw(15)<<gv[i].magv;
			cout<<setw(15)<<gv[i].somon;
			cout<<setw(15)<<gv[i].hocky<<endl;
		}
}
void gvday5mon(giangvien gv[], int n)
{
	cout<<"\n\n\t\t\t\t--DANH SSACH GIANG VIEN DAY 5 MON TRO LEN--"<<endl;
	cout<<setw(30)<<"Ho va ten";
	cout<<setw(15)<<"Ma giang vien";
	cout<<setw(15)<<"So mon";
	cout<<setw(15)<<"Hoc ky"<<endl;
	for(int i=0;i<n;i++)
	{
		if(gv[i].somon>=5)
		{
			cout<<setw(30)<<gv[i].tengv;
			cout<<setw(15)<<gv[i].magv;
			cout<<setw(15)<<gv[i].somon;
			cout<<setw(15)<<gv[i].hocky<<endl;
		}
	}
}
int main()
{
	int n;
	giangvien gv[50];
	cout<<"Nhap so giang vien: "; cin>>n;
	nhap(gv,n);
	xuat(gv,n);
	gvday5mon(gv,n);
	return 0;
}