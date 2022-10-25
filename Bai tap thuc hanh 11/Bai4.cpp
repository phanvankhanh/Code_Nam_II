#include<iostream.h>
#include<string.h>
#include<stdio.h>
#define maxhs 3
#define maxlen 3
int main()
{
	char *s1,*s2;
	s1=new char();
	s2= new char();
	cout<<"nhap gia tri cho xau 1: ";
	cin.getline(s1,50);
	cout<<"Nhap gia tri xau s2: ";
	cin.getline(s2,50);
	if(strcmp(s1,s2)==0)
	{
		cout<<"hai xau giong nhau."<<endl;
	}
	else if(strcmp(s1,s2)==1)
	{
		cout<<"Xau mot lon hon xau hai."<<endl;
	}
	else 
	{
		cout<<"Xau mot nho hon xau hai."<<endl;
	}
	return 0;
}