#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int main()
{
	int n;
	int *p;
	cout<<"nhap so phan tu: "<<endl;
	cin>>n;
	p=new int;
	if(p!=NULL)
	{
		for(int i=0;i<n;i++)
			*(p+i)=i;
			for(int i=0;i<n;i++)
			cout<<*(p+i)<<endl;
			cout<<"in ra cac so chan: "<<endl;
			for(int i=0;i<n;i++)
				if(*(p+i)%2==0)
					cout<<*(p+i)<<endl;
			delete p;
	}
	else 
	{
		cout<<"\n Khong du"<<endl;
	}
}