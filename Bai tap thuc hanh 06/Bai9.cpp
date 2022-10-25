//bai 9:

#include<iostream.h>
#include<stdio.h>
#include<iostream.h>
#include<math.h>
//s=n^2*X(0)+(n-1)^2*X(1)+...+1^2
long x(int n)
{
	if(n==0)		//khi i=n-1; x(n(n-1)=x(n-n+1)=x(1)
		return 1;		//khi i=1; 1^2*x(n-1)
	else 
	{
		long s=0;
		for(int i=n;i>=1;i--)
		{
			s=s+pow(i,2)*x(n-i);
			return s;
		}
	}
	
}
int main()
{
	int n;
	cout<<"Nhap n:"; cin>>n;
	cout<<"Tong la "<<x(n)<<endl;
	return 0;
}