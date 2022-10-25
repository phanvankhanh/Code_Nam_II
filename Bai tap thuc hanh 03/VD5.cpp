//tinh tong cac uoc so cua n
#include<iostream.h>
#include<conio.h>
int main()
{
	int n;
	cout<<"nhap n: "<<endl;
	cin>>n;
	int s=0;
	int dem=0;
	for(int i=1;i<n;i++)
		if(n%i==0)//neu i la uoc cua n
		{
			s=s+i;
			dem=dem+1;
			cout<<"uoc cua: "<<n<<" la "<<i<<endl;	
		}
	cout<<"tong cac uoc cua n la: "<<s<<endl;
	cout<<"co "<<dem<<" so la uoc cua "<<n<<endl;	
}
