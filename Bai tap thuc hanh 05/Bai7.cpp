#include<iostream.h>
#include<conio.h>
bool kttg(int a, int b, int c)
{
	if(a+b>c && a+c>b && b+c>a)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int x,y,z;
	cout<<"Nhap vao 3 canh cua tam giac."<<endl;
	cout<<"Nhap x: "; cin>>x;
	cout<<"Nhap y: "; cin>>y;
	cout<<"Nhap z: "; cin>>z;
	if(kttg(x,y,z))
	{
		cout<<"3 canh tao thanh tam giac."<<endl;
	}
	else 
	{
		cout<<"3 canh khong tao thanh tam giac."<<endl;
	}
	return 0;
}