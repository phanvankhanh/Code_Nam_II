#include<iostream.h>
#include<conio.h>
int main()
{
	int n;
	int s=0;
	cout<<"nhap vao so n tu ban phim"<<endl;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		s=s+i;
	}
	cout<<"tong n so la: "<<s<<endl;
	//ting tong cac so chan
	int schan=0;
	for(int i=0;i<=n;i++)
	{
		s=schan+2*i;
	}
	cout<<"tong so chan la: "<<s<<endl;
	return 0;
}