#include<iostream.h>
#include<conio.h>
#include<math.h>

//S=1+4+9+...+n. Viet ham de quy tinh tong.

long tong(int b)
{
	if(b==1)
		return 1;
	else 
		return tong(b-1)+(float)pow(b,2);
}

int main()
{
	int n;
	cout<<"Nhap n: "; cin>>n;
	cout<<"Tong la: "<<tong(n)<<endl;
	return 0;
}