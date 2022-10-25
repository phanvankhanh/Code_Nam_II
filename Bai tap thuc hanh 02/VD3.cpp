#include<iostream.h>
int main()
{
	char kytu;
	cout<<"Nhap vao ky tu: "; cin>>kytu;
	switch(kytu)
	{
		case 'a':
		case 'o':
		case 'i':
		case 'u':
		case 'e':
		cout<<"ky tu la nguyen am\n"<<endl;
		break;
		default:
		cout<<"ky tu la phu am\n"<<endl;
		break;
	}
}