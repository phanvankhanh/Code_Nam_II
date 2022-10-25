#include<iostream.h>
#include<string.h>
int main()
{
	int n;
	char s[50];
	cout<<"Nhap xau: ";
	cin.getline(s,50);
	n=strlen(s);
	if(n==0)
	{
		cout<<"Khong co ki tu nao trong xau"<<endl;
		return 0;
	}
	int d=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]==' ')
		{
			d++;
		}
	}
	cout<<"So tu trong xau la: "<<d<<endl;
	return 0;
	
}