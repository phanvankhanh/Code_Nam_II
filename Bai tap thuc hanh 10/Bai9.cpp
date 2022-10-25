#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int main()
{
	int n,*p;
	long int P=1;
	cout<<"Nhap n: "; cin>>n;
	p=&n;
	for(int i=1;i<=*p;i++)
	{
		P=P*i;
	}
	cout<<"giai thua cua "<<n<<" la "<<P<<endl;
	return 0;
}