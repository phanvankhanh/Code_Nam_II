#include<iostream.h>
#include<math.h>
int main()
{
	cout<<"nhap hai so x va y"<<endl;
	char toantu;
	float x,y;
	cout<<"nhap x: "; cin>>x;
	cout<<"nhap y: "; cin>>y;
	cout<<"+++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"++ nhap + thi ket qua se la x+y      ++"<<"\n";
	cout<<"++ nhap - thi ket qua se la x-y      ++"<<"\n";
	cout<<"++ nhap * thi ket qua se la x*y      ++"<<"\n";
	cout<<"++ nhap / thi ket qua se la x/y      ++"<<"\n";
	cout<<"+++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"\nNhap toan tu: "; cin>>toantu;
	switch(toantu)
	{
		case '+':
		cout<<"tinh tong."<<endl;
		cout<<"ket qua = "<<x+y<<endl;
		break;
		case '-':
		cout<<"tinh hieu."<<endl;
		cout<<"ket qua = "<<x-y<<endl;
		break;
		case '*':
		cout<<"tinh tich."<<endl;
		cout<<"ket qua = "<<x*y<<endl;
		break;
		case '/':
		cout<<"tinh thuong."<<endl;
		if(y==0)
		{
			cout<<"khong thuc hien duoc phep chia."<<endl;
		}
		else
		{
			cout<<"ket qua = "<<x/y<<endl;
		}
		break;
		default:
		cout<<"ban nhap sai toan tu, moi ban nhap lai."<<endl;
		break;
	}
	return 0;
}