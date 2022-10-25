#include<iostream.h>
#include<math.h>
int main()
{
	int luachon;
	cout<<"++++++++++++++++++++++++++++++++++++++"<<"\n";
	cout<<"++ 1. Tinh dien tich hinh vuong     ++"<<"\n";
	cout<<"++ 2. Tinh dien tich hinh chu nhat  ++"<<"\n";
	cout<<"++ 3. Tinh dien tich hinh thang     ++"<<"\n";
	cout<<"++ 4. Tinh dien tich hinh binh hanh ++"<<"\n";
	cout<<"++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"\nNhap vao lua chon cua ban: "; cin>>luachon;
	switch(luachon)
	{
		case 1:
		cout<<"\nTinh dien tich hinh vuong"<<endl;
		float a;
		cout<<"Nhap vao canh cua hinh vuong: "; cin>>a;
		cout<<"Dien tich hinh vuong la: S = "<<a*a<<endl;
		break;
		case 2:
		cout<<"\nTinh dien tich hinh chu nhat"<<endl;
		float x,y;
		cout<<"Chieu dai: "; cin>>x;
		cout<<"Chieu rong: "; cin>>y;
		cout<<"Dien tich hinh chu nhat la: S = "<<x*y<<endl;
		break;
		case 3:
		cout<<"\nTinh dien tich hinh thang"<<endl;
		float m,n,h;
		cout<<"Day lon: "; cin>>m;
		cout<<"Day be: "; cin>>n;
		cout<<"Chieu cao: "; cin>>h;
		cout<<"Dien tich hinh thang la: S = "<<((m+n)*h)/2<<endl;
		break;
		case 4:
		cout<<"\nTinh dien tich hinh binh hanh"<<endl;
		float p,q;
		cout<<"Canh day: "; cin>>p;
		cout<<"Chieu cao: "; cin>>q;
		cout<<"Dien tich hinh binh hanh la: S = "<<p*q<<endl;
		break;
	}
	return 0;
}