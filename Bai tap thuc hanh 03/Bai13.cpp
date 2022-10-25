#include<iostream.h>
#include<conio.h>
int main()
{
	int n;
	int lg=1;
	cout<<"Nhap vao n: ";
	cin>>n;
	cout<<"Cac so nguyen to trong pham vi "<<n<<" la "<<endl;
	for(int i=1;i<=n;i++)
	{
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				lg=0;
			}
		}
		if(lg==1)
		{
			cout<<"i="<<i<<endl;
		}
	}
}