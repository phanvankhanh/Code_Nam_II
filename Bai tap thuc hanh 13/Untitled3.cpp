#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
typedef struct{
	char mahang[15];
	char tenmh[30];
	int soluong;
	float dongia;
	long thanhtien;
}Mathang;
void nhap(Mathang mh[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin.ignore();
		cout<<"Nhap thong tin mat hang thu "<<i+1<<endl;
		cout<<"Ma mat hang: ";
		cin.getline(mh[i].mahang,15);
		cout<<"Ten mat hang: "; cin.getline(mh[i].tenmh,30);
		cout<<"So luong: "; cin>>mh[i].soluong;
		cout<<"Don gia: "; cin>>mh[i].dongia;
	}
}
void xuat(Mathang mh[], int n)
{
	cout<<"\n\t\t\tDANH SACH MAT HANG CUA SIEU THI"<<endl;
	cout<<setfill('+');
	cout<<"|"<<setw(20)<<"Ma mat hang";
	cout<<"|"<<setw(20)<<"Ten mat hang";
	cout<<"|"<<setw(20)<<"So luong";
	cout<<"|"<<setw(20)<<"Don gia";
	cout<<"|"<<setw(20)<<"Thanh tien"<<"|"<<endl;
	cout<<setfill('+')<<endl;
	for(int i=1;i<n;i++)
	{
		cout<<"|"<<setw(20)<<mh[i].mahang;
		cout<<"|"<<setw(30)<<mh[i].tenmh;
		cout<<"|"<<setw(10)<<mh[i].soluong;
		cout<<"|"<<setw(15)<<mh[i].dongia;
		cout<<"|"<<setw(20)<<mh[i].thanhtien<<endl;
	}
}


int main()
{
	Mathang mh[50];
	int n;
	cout<<"Nhap n: "; cin>>n;
	nhap(mh,n);
	xuat(mh,n);
}