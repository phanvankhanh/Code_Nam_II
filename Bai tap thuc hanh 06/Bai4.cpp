#include<iostream.h>
#include<conio.h>
#include<math.h>

//Sn=1^1*2^2*3^3*...*n^n

double luythua(int a)
{
	if(a==1)
		return 1;
	else 
		return luythua(a-1)*(float)pow(a,a);
}

int main()
{
	int n; cout<<"Nhap n: "; cin>>n;
	cout<<"Ket qua = "<<luythua(n)<<endl;
	return 0;
}