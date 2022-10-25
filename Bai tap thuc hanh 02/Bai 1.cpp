/*Viet chuong trinh nhap vao mot thang vao mot nam. In so ngay cua thang do.*/

#include<iostream.h>
#include<conio.h>
using namespace std;
int main()
{
	int thang,nam;
	cout<<"nhap vao mot thang: "<<endl; cin>>thang;
	cout<<"nhap vao mot nam: "<<endl; cin>>nam; 
	switch(thang)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		cout<<"do la thang co 31 ngay"<<endl;
		break;
		case 4:
		case 6:
		case 9:
		case 11:
		cout<<"do la thang co 30 ngay"<<endl;
		break;
		case 2:
		if(nam%4==0) &&(nam%100!=0)||(nam%400==0)
		{
			cout<<"do la thang co 29 ngay"<<endl;
		}
		else
		{
			cout<<"do la thang co 28 ngay"<<endl;
		}
		break;
	default:
	cout<<"ban nhap khong dung,moi ban nhap tu 1-12."<<endl;
	break;
	}
	
	return 0;
}  	