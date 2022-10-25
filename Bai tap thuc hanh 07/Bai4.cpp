#include<iostream.h>
void nhap(int b[], int m)
{
	for(int i=0;i<m;i++)
	{
		cout<<"b["<<i<<"]=";
		cin>>b[i];
	}
}
void demso(int a[], int n)
{ 
	int sd=0,sa=0,s0=0;
	for(int i=0;i<n;i++)
	{ 
		if (a[i]>0)
		{
			cout<<" cac so duong la: "<<a[i]<<endl;	
			sd++;
		} 
	 	if (a[i]<0)
	 	{
 			cout<<"cac so am la: "<<a[i]<<endl;
			 sa++;	
 		} 
	 	if (a[i]==0)
	 	{
	 		cout<<" cac so bang 0: "<<a[i]<<endl;	
 			s0++;
 		} 
	}
}
int main()
{
	int a[100],n;
	cout<<"Nhap vao so phan tu mang: "; cin>>n;
	nhap(a,n);
	demso(a,n);
	return 0;
}