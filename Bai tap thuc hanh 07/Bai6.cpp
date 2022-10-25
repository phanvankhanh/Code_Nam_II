#include<iostream.h>
void nhap(int b[], int m)
{
	for(int i=0; i<m;i++)
	{
		cout<<"b["<<i<<"]="; cin>>b[i];	
	}
		
}
int tongle(int b[], int m)
{
	int sum=0;
	for(int i=0;i<m;i++)
	{
		if(b[i]%2!=0)
		{
			cout<<"Cac so le la: "<<b[i]<<endl;
			sum=sum+b[i];
		}
	}
	cout<<"Tong cac so le trong mang la: "<<sum<<endl;
}

int main()
{
	int a[50],n;
	cout<<"Nhap vao so phan tu cua mang: "; cin>>n;
	nhap(a,n);
	tongle(a,n);
}