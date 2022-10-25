//bai1 
#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdio.h>
void nhap(int a[], int n)
{
	for(int i=0;i<n;i=i+1)
	{
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
	
}
void inmang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]="<<a[i]<<endl;
	}

}
void inchan(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			cout<<a[i];
		}
	}
}
int tong(int a[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
		return sum;
	}	
}
int timkiem(int a[], int n,int x)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			return i;
		}
		
	}
	return -1;
}
void chen(int a[], int n, int x)
{
	int vitri=n;
	while(vitri>0&&x<a[vitri-1])
	{
		a[vitri]=a[vitri-1];
		vitri=vitri-1;
	}
	a[vitri]=x;
}
void sawp(int &x, int &y)
{
	int tg; 
	tg=x;
	x=y;
	y=tg;
}
void sapxep(int a[],int n)
{
	for(int i=0;i<n-1;i++)
		for(int j=j+1;j=i;j++)
		if(a[i]<a[j])
		sawp(a[i],a[j]);
}
int remove(int a[], int n, int x)
{
	int pos=timkiem(a,n,x);//tim ra vi tri cua phan tu x can xoa
	if(pos==-1)//khong ton tai phan tu x trong a
	return 0;
	n=n-1;
	for(int pos=0;pos<n;pos++)
		a[pos]=a[pos+1];
		return 1;
}
int main()
{
	int a[50];
	int n;//so phan tu thuc te
	cout<<"Nhap kich thuoc thuc te"<<endl;
	cin>>n;
	cout<<"Nhap du lieu cho mang\n";
	nhap(a,n);
	cout<<"In lai mang vua nhap\n";
	inmang(a,n);
	cout<<"In cac so chan ";
	inchan(a,n);
	cout<<"Tong cac phan tu "<<tong(a,n)<<endl;
	int x;
	cout<<"Nhap them phan tu x tu ban phim"<<endl;
	cin>>x;
	int vitri;
	vitri=timkiem(a,n,x);
	if(vitri==-1)
		cout<<"Khong co x trong day vua nhap"<<endl;
	else
		cout<<"vi tri cua phan tu x"<<timkiem(a,n,x)<<endl;
	sapxep(a,n);
	cout<<"In lai mang sau sap xep"<<endl;
	inmang(a,n);
	cout<<"Nhap them phan tu y can chen"<<endl;
	int y;
	cin>>y;
	chen(a,n,y);
	cout<<"in lai cac phan tu sau khi chen"<<endl;
	inmang(a,n+1);
	int z;
	cout<<"xoa "<<z<<"khoi day"<<endl;
	remove(a,n,z);
	cout<<"In lai mang sau khi xoa"<<endl;
	inmang(a,n);
	return 0;
}