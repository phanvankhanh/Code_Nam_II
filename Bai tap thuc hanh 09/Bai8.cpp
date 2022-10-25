#include<iostream.h>
#include<string.h>
int main()
{
	char s[50];
	int i=0;
	cout<<"Nhap xau ho ten: "; 
	cin.getline(s,50);
	int n=strlen(s);
	cout<<"Ho tach duoc la: ";
	while(s[i]!=' ')
	{
		cout<<s[i];
		i++;
	}
	cout<<endl;
	return 0;
}