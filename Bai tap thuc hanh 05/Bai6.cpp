#include<iostream.h>
#include<conio.h>
int uoc(int a)
{ 
	for(int i=1;i<a;i++)
	{
		if(a%i==0)
		{
			cout<<i<<" ";
		}
	}
	return a;
}
int main()
{
	int n;
	cout<<"Nhap n: "; cin>>n;
	cout<<"Tat ca cac uoc cua "<<n<<" la "<<uoc(n)<<endl;
	return 0;
}