#include<iostream.h>
#include<string.h>
int main()
{
	char s[50];
	cout<<"Nhap xau: ";
	cin.getline(s,50);
	int n=strlen(s);
	cout<<"In xau thanh chu in hoa: "<<strupr(s)<<endl;
	return 0;
}