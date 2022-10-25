#include<iostream.h>
#include<string.h>
int main()
{
	int n;
	char s[50];
	cout<<"Nhap xau: ";
	cin.getline(s,50);
	n=strlen(s);
	cout<<"Dem so ky tu a,b."<<endl;
	int d=0;
	for(int i=0;i<n;i++)
	{
		if(toupper(s[i])=='A')
		{
			d++;
		}
	}
	cout<<"So ky tu a la: "<<d<<endl;
	int c=0;
	for(int i=0;i<n;i++)
	{
		if(toupper(s[i])=='B')
		{
			c++;
		}
	}
	cout<<"So ky tu b la: "<<c<<endl;
	return 0;
}