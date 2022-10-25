#include<iostream.h>
#include<conio.h>
int ucln(int, int);
int main()
{
	int a,b,c,d;
	cout<<"Nhap vao 4 so."<<endl;
	cout<<"Nhap a: "; cin>>a;
	cout<<"Nhap b: "; cin>>b;
	cout<<"Nhap c: "; cin>>c;
	cout<<"Nhap d: "; cin>>d;
	cout<<"Uoc chung lon nhat cua bon so la "<<ucln(ucln(a,b),ucln(c,d))<<endl;
	return 0;
	
}
int ucln(int n, int m)
{
	while(n!=m)
	{
		if(n>m)
			n=n-m;
		else
			m=m-n;
		return n;
	}
}