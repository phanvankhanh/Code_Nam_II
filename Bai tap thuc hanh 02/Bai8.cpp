#include<iostream.h>
#include<conio.h>
int main()
{
	int nhap;
   	do 
 	 {  
		 cout<<"Nhap vao mot so co 2 chu so"<<endl;
	     cin >> nhap;
	     if (nhap<10 || nhap>99)
		 cout<<"Ban phai nhap so co 2 chu so.Moi ban nhap lai."<<endl;
   	} while (nhap<10 || nhap>99);
	switch(nhap/10)
	{
		case 1:
		cout<<"\nMuoi ";
		break;
		case 2:
		cout<<"\nHai muoi ";
		break;
		case 3:
		cout<<"\nBa muoi ";
		break;
		case 4:
		cout<<"\nBon muoi ";
		break;
		case 5:
		cout<<"\nNam muoi ";
		break;
		case 6: 
		cout<<"\nSau muoi ";
		break; 
		case 7:
		cout<<"\nBay muoi ";
		break;
		case 8:
		cout<<"\nTam muoi ";
		break;
		case 9:
		cout<<"\nChin muoi ";
		break;
	};
	switch(nhap%10)
	{
		case 1:
		cout<<"mot"<<endl;
		break;
		case 2:
		cout<<"hai"<<endl;
		break;
		case 3:
		cout<<"ba "<<endl;
		break;
		case 4:
		cout<<"bon"<<endl;
		break;
		case 5: 
		cout<<"nam"<<endl;
		break;
		case 6:
		cout<<"sau"<<endl;
		break;
		case 7:
		cout<<"bay"<<endl;
		break;
		case 8:
		cout<<"tam"<<endl;
		break;
		case 9:
		cout<<"chin"<<endl;
		break;
	}
}