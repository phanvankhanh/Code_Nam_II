#include<iostream.h>
#include<string.h>
int main()
{
	char s1[50];
	char s2[50];
	cout<<"Nhap xau thu nhat: ";
	cin.getline(s1,50);
	cout<<"Nhap xau thu hai: ";
	cin.getline(s2,50);
	if(strcmp(s1,s2)==0)
	{
		cout<<"Xau thu nhat bang xau thu hai."<<endl;
	}
	else if(strcmp(s1,s2)==1)
	{
		cout<<"Xau thu nhat lon hon xau thu hai."<<endl;
	}
	else
	{
		cout<<"Xau thu hai lon hon xau thu nhat."<<endl;
	}
	return 0;
}