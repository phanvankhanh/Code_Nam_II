#include<iostream.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a;
	cout<<"Nhap so KW dien tieu thu: "; cin>>a;
	float dongia;
	long tongtien;
	if(a>=0 && a<=100)
	{
		dongia=2000;
		tongtien=a*dongia;
	}
	else if(a>=101 && a<=200)
	{
		dongia=2500;
		tongtien=a*dongia;
	}
	else if(a>=201 && a<=300)
	{
		dongia=3000;
		tongtien=a*dongia;
	}
	else
	{
		dongia=5000;
		tongtien=a*dongia;
	}
	cout<<"So tien dien la: "<<tongtien<<endl;
	return 0;
}