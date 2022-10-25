#include<iostream.h>
#include<conio.h>
int main()
{
	int i=2,j,kt,n;
	cout<<"Nhap n: "; cin>>n;
	while(i<=n)
	{
		kt=1;
		if(i!=0 && i!=1)
		{
			j=2;
			while(j<=i/2)
			{
				if(i%j==0)
				{
					kt=0;
				}
				j++;
			}
		}
		else{
			kt=0;
		}
		i++;
	}
	if(kt==1)
	{
		cout<<n<<" la so nguyen to"<<endl;
	}
	else
		cout<<n<<" khong phai la so nguyen to"<<endl;
	return 0;
}