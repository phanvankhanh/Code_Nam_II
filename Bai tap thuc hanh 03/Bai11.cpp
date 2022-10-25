#include<iostream.h>
#include<conio.h>
int main()
{
	int n; 
	int s=0;
	cout<<"Nhap vao so n: ";
	cin>>n;
	for(int i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			s=s+i;
			cout<<"uoc cua "<<n<<" la: "<<i<<endl;	
		}
	}
	cout<<"Tong cua cac uoc la: "<<s<<endl;
	if(s==n)
	{
		cout<<n<<" la so hoan hao."<<endl;
	}
	else
	{
		cout<<n<<" khong phai la so hoan hao."<<endl;	
	}
	return 0;
}