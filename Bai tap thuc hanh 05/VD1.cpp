#include<iostream.h>
#include<conio.h>
int sum(int, int);
int max1(int, int);
bool kthh(int );
int ucln(int, int);
int mu(int, int);
int main()
{
	int a,b,c,d,x,y;
	cout<<"nhap  so a,b,c,d"<<endl;
	cin>>a>>b>>c>>d;
	int tong;
	tong=sum(sum(sum(a,b),sum(c,d)),sum(c,d));
	cout<<"tong cua 6 so nhap vao la: "<<tong<<endl;
	int max;
	max=max1(a,b);
	cout<<"gia tri max cua a,b la "<<max<<endl;
	cout<<"gia tri max cua 4 so la "<<max1(max1(a,b),max1(c,d));
	cout<<"Kiem tra hoan hao"<<endl;
	if(kthh(a))
		cout<<a<<"la so hoan hao"<<endl;
	else
		cout<<a<<"khong la so hoan hao"<<endl;
	cout<<"UCLN la "<<ucln<<endl;
	cout<<"Mu la "<<mu<<endl;
	return 0;
}
int sum(int x,int y)
{
	return x+y;
}
int max1(int x, int y)
{
	int maxx;
	maxx=(x>y)?x:y;
	return maxx;
}
bool kthh(int n)
{
	int tonguoc=0;
	for(int i=1;i<n;i++)//kiem tra cac so nam trong pham vi tu 1 den n-1 so nao la uoc cua n
	{
		if(n%i==0)
		{
			tonguoc=tonguoc+i;
		}
	}
	if(n==tonguoc)
		return true;
	else
		return false;
}
int ucln(int n,int m)
{
	while(n!=m)
	 	if(n>m)
		 	n=n-m;
		 else
	 		m=m-n;
	 		return n;
}
int mu(int m, int n)
{
	int tich=1;
	for(int i=1;i<=n;i++)
	tich=tich*m;//nhan n lan so m
	
}
