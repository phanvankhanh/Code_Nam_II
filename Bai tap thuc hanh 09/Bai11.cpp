#include<iostream.h>
#include<string.h>
int main()
{
	char s[50],t[30];
	cout<<"Nhap xau: ";
	cin.getline(s,50);
	int n=strlen(s);
	cout<<"Nhap ky tu: "; cin>>t;
	bool k=false;
	for(int i=0;i<n;i++)
	{
		if(s[i]==t[i])
		{
			k=true;
		}
	}
	if(k)
	{
		cout<<"Xau "<<t<<" co ton tai trong xau "<<s<<endl;
	}
	else 
	{
		cout<<"Xau "<<t<<" khong ton tai trong xau "<<s<<endl;
	}
	return 0;
}