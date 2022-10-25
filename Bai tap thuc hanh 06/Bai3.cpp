#include<iostream.h>
#include<conio.h>

float Tong(int n)
{
	if(n==1)
		return 1;
	else 
		return Tong(n-1)+(float)1/n;
}

int main()
{
	int n;
	cout<<"nhap vao n:"; cin>>n;
	cout<<"Tong S = "<<Tong(n)<<endl;
	return 0;
}