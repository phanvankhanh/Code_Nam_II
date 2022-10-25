#include<iostream.h>
#include<string.h>
int main()
{
	char s[50],ch;
	cout<<"Nhap xau ky tu: "; cin.getline(s,50);
	cout<<"Nhap xau ky tu can tim: "; cin>>ch;
	int n=strlen(s); 
	bool k=false;
	for(int i=0;i<n;i++)
	{
		if(s[i]==ch)
		{
			k=true;
		}
	}
	if(k)
	{
		cout<<"Ky tu "<<ch<<" co trong xau"<<endl;
	}
	else
	{
		cout<<"Ky tu "<<ch<<" Khong co trong xau"<<endl;
	}
	return 0;
}