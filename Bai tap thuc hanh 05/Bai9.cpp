#include<iostream.h>
#include<conio.h>
bool ktscp(int );
int main()
{
	int n;
	cout<<"Nhap n: "; cin>>n;
	cout<<"So chinh phuong trong pham vi "<<n<<" la "<<ktscp(n)<<endl;
}
bool ktscp(int a)
{
	int i=0;
	while(i*i<=a)
	{
		if(i*i==a)
		{
			return true;
		}
		i++;
	}
	return false;

}