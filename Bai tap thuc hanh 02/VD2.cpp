/*nhap mot so trong pham vi tu 1-10,dung switch de in ra cac so chan,le*/
#include<iostream.h>
int main()
{
	int so;
	cout<<"nhap vao so: "<<endl;
	cin>>so;
	switch(so)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 9:
		cout<<"so nay la so le."<<endl;
		break;
		case 2:
		case 4:
		case 6:
		case 8:
		case 10:
		cout<<"so nay la so chan."<<endl;
		break;
		default:
		cout<<"ban nhap sai, moi ban nhap lai"<<endl;
		break;
	}
}