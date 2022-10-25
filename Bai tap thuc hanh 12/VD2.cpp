#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
typedef struct 
{
	char tensp[20];
	char masp[15];
	int soluong;
	float dongia;
}sanpham;
int main()
{
	int tongtt=0;
	sanpham sp[20];
	int n;
	cout<<"nhap so san pham thuc te"<<endl;
	cin>>n;
	cout<<"nhap thong tin n san pham"<<endl;
	for(int i=0;i<n;i++)
	{
		cin.ignore();
		cout<<"nhap ten san pham thu:"<<i+1<<endl;
		cin.getline(sp[i].tensp,15);
		cout<<"nhap ma san pham thu: "<<i+1<<endl;
		cin.getline(sp[i].masp,15);
		cout<<"nhap so luong san pham thu:"<<i+1<<endl;
		cin>>sp[i].soluong;
		cout<<"nhap don gia san pham thu:"<<i+1<<endl;
		cin>>sp[i].dongia;
	}
	cout<<"in lai thong tin n san pham vua nhap"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<sp[i].tensp<<endl;
		cout<<sp[i].tensp<<endl;
		cout<<sp[i].tensp<<endl;
		cout<<sp[i].tensp<<endl;
		tongtt=tongtt+(sp[i].soluong*sp[i].dongia);
	}
	return 0;
}