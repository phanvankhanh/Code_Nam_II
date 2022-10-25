#include<iostream.h>
#include<math.h>
int main()
{
	float a,b,c;
	cout<<"nhap vao 3 so nguyen"<<endl;
	cout<<"nhap a: "; cin>>a;
	cout<<"nhap b: "; cin>>b;
	cout<<"nhap c: "; cin>>c;	
	int luachon;
	cout<<"++++++++++++++++++++++++++++++++++++"<<"\n";
	cout<<"++ 1. Tinh tong a+b+c             ++"<<"\n";
	cout<<"++ 2. Tinh tich a*b*c             ++"<<"\n";
	cout<<"++ 3. Giai phuong trinh ax+b=c    ++"<<"\n";
	cout<<"++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"nhap vao lua chon: "; cin>>luachon;
	switch(luachon)
	{
		case 1:
		cout<<"Tong = "<<a+b+c<<endl;
		break;
		case 2:
		cout<<"Tich = "<<a*b*c<<endl;
		break;
		case 3:
		if(a==0)
		{
			if(b==0)
			{
				if(c==0)
				{
					cout<<"Phuong trinh co vo so nghiem."<<endl;
				}
			}
			else
			cout<<"phuong trinh vo nghiem."<<endl;
		}
		else
		cout<<"phuong trinh co nghiem duy nhat la: x = "<<(c-b)/a<<endl;
		break;
		default:
		cout<<"khong co lua chon, moi ban chon lai."<<endl;
		break;
	}
	
	return 0;
}