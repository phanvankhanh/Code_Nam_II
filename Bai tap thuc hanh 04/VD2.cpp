#include<iostream.h>
#include<conio.h>
//VD: tim UCLN cua hai so a,b
int main()
{
	int a,b,r;
	cout<<"nhap hai so a,b tu ban phim"<<endl;
	cin>>a;
	cin>>b;
	while(a!=b)
	{
		if(a>b)
		{
			r=a-b;
		}
		else
		b=b-a;
	}
	cout<<"UCLN cua hai so a,b la:"<<a<<endl;
}