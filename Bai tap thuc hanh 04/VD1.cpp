#include<iostream.h>
#include<conio.h>
int main()
{
	int i=0,S=0,n;
	cout<<"Nhap n: ";
	cin>>n;
	do{
		S=S+i;
		i=i+1;
	}
	while(i<=n);
	cout<<"Tong cua"<<n<<" so la "<<S<<endl;
}