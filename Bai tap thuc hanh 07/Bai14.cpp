#include<iostream.h>
#include<math.h>
void nhap(int b[], int m)
{
	for(int i=0;i<m;i++)
	{
		cout<<"b["<<i<<"]=";
		cin>>b[i];
	}
}
int  KTSHH(int x)
{	int tong = 0; 
	for(int i=1;i<x;i++)
		if (x%i==0) 
			tong += i;
		if(tong ==x)		
			return 1;		
	return 0;         
}
int	 main()
{ 
	int a[100], n;
  	cout<<"Nhap so phan tu mang: "; cin>>n;	
 	nhap(a,n);
 	cout<<"Cac so hoan hao trong mang la:"<<endl;
  	for (int i=0;i<n;i++)
		if (KTSHH(a[i])==1)
			cout<<a[i];
 	cout<<endl;
  	return 0;
} 
 
