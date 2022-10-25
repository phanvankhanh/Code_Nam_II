#include <iostream.h>
#include<conio.h>
int main()
{
	int n; 
	cout<<"Nhap vao n: ";
	cin>>n;
	float s=0;
	for(int i=1;i<=n;i++)
	{
		s=s+1.0/i;
		cout<<"i="<<i<<endl;
	}
	cout<<"Tong S la: "<<s<<endl;
	return 0;
}