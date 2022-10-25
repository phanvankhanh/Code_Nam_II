#include<iostream.h>
#include<string.h>
int main()
{
	char s[50],ch;
	int i;
	cout<<"Nhap xau: ";
	cin.getline(s,50);
	cout<<"Nhap ky tu: ";
	cin>>ch;
	int n=strlen(s);
	int d=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]==ch)
		{
			d++;
		}
	}
	cout<<"So lan xuat hien cua ky tu "<<ch<<" la "<<d<<" lan."<<endl;
	return 0;
	
}