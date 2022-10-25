#include<iostream.h>
#include<conio.h>
//Bai3: viet chuong trinh nhap vao 1 so nguyen n(0<n<50)>Neu nhap sai,yeu cau nhap lai
int main()
{
	int n;
	do{
		cout<<"Nhap n: ";
		cin>>n;
		if(n<=0 || n>50)
		{
			cout<<"Nhap lai n"<<endl;
		}
	}while(n<=0 || n>50);
	return 0;
}