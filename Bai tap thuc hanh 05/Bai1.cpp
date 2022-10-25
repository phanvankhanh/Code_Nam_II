#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int max(int ,int );
int main()
{
	int a,b,c,d;
	cout<<"nhap vao 4 so nguyen:"<<endl;
	cout<<"a= "; cin>>a;
	cout<<"b= "; cin>>b;
	cout<<"c= "; cin>>c;
	cout<<"d= "; cin>>d;
	cout <<"So lon nhat trong 4 so la "<<max(max(a, b),max(c, d))<<endl; 
	return 0;
}
int max(int x, int y)
{
	return(x>y)?x:y;
}