#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<stdio.h>
typedef struct 
{
	char tensp[15];
	char masp[15];
	int soluong;
	float dongia;
}sanpham;
int main()
{
	sanpham sp1,sp2;
	cout<<"nhap thong tin san pham so 1"<<endl;
	cout<<"nhap ten san pham "<<endl;
	cin.getline(sp1.tensp,10);
	cout<<"nhap ma san pham"<<endl;
	cin.getline(sp1.masp,10);
	cout<<"nhap so luong "<<endl;
	cin>>sp1.soluong;
	cout<<"nhap don gia"<<endl;
	cin>>sp1.dongia;
	cout<<"in thong tin san pham vua nhap: "<<sp1.tensp<<" "<<sp1.masp<<" "<<sp1.soluong<<" "<<sp1.dongia<<endl;
	cin.ignore();
	cout<<"nhap thong tin san pham thu 2"<<endl;
	cout<<"nhap ten"<<endl;
	cin.getline(sp2.tensp,10);
	cout<<"nhap ma san pham"<<endl;
	cin.getline(sp2.masp,10);
	cout<<"nhap so luong "<<endl;
	cin>>sp2.soluong;
	cout<<"nhap don gia"<<endl;
	cin>>sp2.dongia;
	cout<<"in thong tin san pham vua nhap: "<<sp2.tensp<<" "<<sp2.masp<<" "<<sp2.soluong<<" "<<sp2.dongia<<endl;
	if(sp1.dongia>=sp2.dongia)
	{
		cout<<"san pham co gia tri max la: "<<sp1.tensp<<endl;
	}
	else 
	{
		cout<<"san pham co gia tri max la: "<<sp2.tensp<<endl;
	}
    float (tong=sp1.soluong*sp1.dongia+sp2.soluong*sp2.dongia);
	cout<<"tong gia tien cua hai san pham la: "<<tong<<endl;
	return 0;
}