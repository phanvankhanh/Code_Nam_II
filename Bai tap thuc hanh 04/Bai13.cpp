#include<iostream.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n,i;
	cout<<"Nhap n: ";
	cin>>n;
	i=1;
	float s=0;
	while(i<=n)
	{
		s=s+(float)1/pow(2*i-1,2);
		i++;
	}
	cout<<"Tong S la: "<<s<<endl;
	return 0;
}