#include<iostream.h>
#include<conio.h>
int UCLN(int m, int n)
{	
	if (n == 0)
		return  m;
	else
		return UCLN(n, m%n);		
}

int main()
{
	int x,y,z; 	
	cout<<"Nhap x: "; cin>>x;
	cout<<"Nhap y: "; cin>>y;
	cout<<"Nhap z: "; cin>>z;
	cout<<"UCLN = "<<UCLN(UCLN(x,y),z)<<endl;	
	return 0;

}