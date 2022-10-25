#include<iostream.h>
int main()
{
	char kytu;
	cout<<"nhap vao ky tu: "<<endl; cin>>kytu;
	switch(kytu)
	{
		case 'r':
		case 'R':
		cout<<"coler la RED."<<endl;
		break;
		case 'g':
		case 'G':
		cout<<"coler la GREEN."<<endl;
		break;
		case 'b':
		case 'B':
		cout<<"coler la BLUE."<<endl;
		break;
		default:
		cout<<"coler la BLACK."<<endl;
	}
	return 0;
}