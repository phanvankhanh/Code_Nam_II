#include<iostream.h>
#include<conio.h>
int main()
{
	for(int i=1;i<=9;i++)
	{
		cout<<"Bang cuu chuong: "<<i<<endl;
		for(int j=1;j<=10;j++)
			cout<<" "<<i<<"x"<<j<<"="<<i*j<<endl;	
	}
}