#include<iostream.h>
#include<conio.h>
#include<math.h>

int gt(int x)
{
	if(x==0)
		return 1;
	else 
		return gt(x-1)*x;
}

int main()
{
	int n,k;
	long C;
	cout<<"Nhap n: "; cin>>n;
	cout<<"Nhap k: "; cin>>k;
	C=gt(n)/(gt(k)*gt(n-k));
	cout<<"To hop chap "<<k<<" cua "<<n<<" = "<<C<<endl;
	return 0;
}