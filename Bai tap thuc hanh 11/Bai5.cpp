#include<iostream.h>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap so nguoi can quan li: ";cin>>n;
	string A[n];
	string *P[n];
	cin.ignore();
	for(int i=0;i<n;i++)
	{ 
		cout<<" nguoi thu  "<<i+1<<" : ";
		getline(cin,A[i]);
		P[i]=&A[i];	
	}
	
	int vtri;
	cout<<"Vi tri n = ";cin>>vtri;
	cout<<*P[vtri]<<endl;
}