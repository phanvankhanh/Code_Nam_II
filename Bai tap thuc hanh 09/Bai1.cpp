#include<iostream.h>
#include<string.h>
int main()
{
	char s[50]; //Khai bao mang xau ki tu
	int n;
	cout<<"Nhap xau: ";
	cin.getline(s,50);
	n=strlen(s);
	cout<<"Xau vua nhap la: "<<s<<endl;
	cout<<"Xau dao nguoc la: ";
	for(int i=n-1;i>=0;i--)
	{
		cout<<s[i];
	}
	cout<<endl;
	return 0;
}