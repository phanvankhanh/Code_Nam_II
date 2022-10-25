#include<iostream.h>
#include<conio.h>

//tinh so fibonaxi thu n
long fibonaxi(int n)
{
	if(n<=2)
		return 1;
	else 
		return fibonaxi(n-2)+fibonaxi(n-1);
}

int main()
{
	int n;
	cout<<"Nhap n: "; cin>>n;
	cout<<"So fibonaxi thu "<<n<<" la "<<fibonaxi(n)<<endl;
	cout<<"in ra cac so fibonaxi "<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<fibonaxi(i)<<endl;
	}
}