#include<iostream.h>
#include<conio.h>
int main()
{
	char ch; 
	int d=0, dk=0; 
	do {
	cout<<"Nhap vao mot ky tu "; cin>>ch;
	if (ch != '*') d++;
	if (ch =='k') dk++;
	} while (ch != '*');
	cout<<"So ky tu da nhap la: "<<d<<endl; 
	cout<<"So ky tu k la: "<<dk<<endl;
	return 0;
}