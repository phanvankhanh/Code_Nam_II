#include<iostream.h>
#include<string.h>
int main()
{
	char s[50],ten[30];
	int i,j=0;
	cout<<"Nhap xau ho ten: "; 
	cin.getline(s,50);
	int n=strlen(s);
	i=n-1;
	cout<<"Xau tach ten: ";
	while(s[i]!=' ')
	{
		ten[j]=s[i];
		i--;
		j++;
	}
	for(int k=j-1;k>=0;k--)
	{
		cout<<ten[k];
	}
	cout<<endl;
	return 0;
}