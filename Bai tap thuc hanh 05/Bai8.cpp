#include<iostream.h>
#include<conio.h>
int ktsnt( int );
int main()
{
	int n;
	cout<<"Nhap n: "; cin>>n;
	cout<<"tat ca cac so nguyen to trong pham vi "<<n<<" la ";
	for(int i=1; i<=n;i++)
		if(ktsnt(i)==1)
			cout<<i<<" ";
	return 0;
}
int ktsnt(int a)
{
	int dem=0;
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			dem++;
		}
	}
	if(dem==2)
	{
		return 1;
	}
	return 0;
}