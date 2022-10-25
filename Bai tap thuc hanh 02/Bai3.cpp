#include<iostream.h>
#include<conio.h>
int main()
{
	int luachon;
	cout<<"+++++++++++++++++++"<<"\n";
	cout<<"++   1. Talk     ++"<<"\n";
	cout<<"++   2. Eat      ++"<<"\n";
	cout<<"++   3. Play     ++"<<"\n";
	cout<<"++   4. Sleep    ++"<<"\n";
	cout<<"+++++++++++++++++++"<<endl;
	cout<<"nhap lua chon cua ban: "; cin>>luachon;
	switch(luachon)
	{
		case 1:
		cout<<"\nban da chon Talk."<<endl;
		break;
		case 2:
		cout<<"\nban da chon Eat."<<endl;
		break;
		case 3:
		cout<<"\nban da chon Play."<<endl;
		break;
		case 4:
		cout<<"\nban da chon Sleep."<<endl;
		break;
		default:
		cout<<"\nban khong chon lua chon nao."<<endl;
		break;
	}
}