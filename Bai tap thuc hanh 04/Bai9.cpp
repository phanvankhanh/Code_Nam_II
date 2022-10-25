#include<iostream.h>
#include<conio.h>
int main()
{
	int n,dem=0,S=0,demam=0;
	do{
		cout<<"nhap n: ";
		cin>>n;
		dem=dem+1;
		S=S+n;
		if(n<0)
			demam++;
	}
	while(n!=0);
	cout<<"So phan tu da nhap la: "<<dem-1<<endl;
	cout<<"Tong cac so va nhap la:"<<S<<endl;
	cout<<"Trung binh cong cac so vua nhap la "<<(float)S/dem<<endl;
	cout<<"So phan tu am la: "<<demam<<endl;
	return 0;
}