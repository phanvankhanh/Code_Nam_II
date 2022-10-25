#include<iostream.h>
int main()
{
	char kytu;
	cout<<"nhap vao ky tu: "<<endl; cin>>kytu;
	switch(kytu)
	{
		case 'a':
		case 'A':
		cout<<"Xin chao."<<endl;
		break;
		case 'b':
		case 'B':
		cout<<"Hoan nghenh."<<endl; 
		break;
		default:
		cout<<"Xin loi."<<endl;	
	}
	return 0;
}