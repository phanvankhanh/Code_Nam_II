#include<iostream.h>
#include<conio.h>
int main()
{
	int n;
	int i=1;
	cout<<"Nhap vao n: ";
	cin>>n;
	while(i<=n)
	{
		int j=1;
		while(j<=i)
		{
			cout<<j;
			j++;
		}
		cout<<"\n";
		i++;
	}
	return 0;
}