#include<iostream.h>
#include<conio.h>
void nhap(int b[], int m)
{
	for(int i=0; i<m;i++)
	{
		cout<<"b["<<i<<"]="; cin>>b[i];	
	}
		
}
void xuat(int b[], int m)
{
	for(int i=0; i<m;i++)
	{
		cout<<b[i]<<" ";
	}
}
void sapxep(int b[],int m)
{
	for(int i=0;i<m-1;i++)
	{
		for(int j=i+1;j<m;j++)
		{
			if(b[i]>b[j])
			{
				int tg=b[i];
				b[i]=b[j];
				b[j]=tg;
			}
		}
	}
}
int main()
{
	int a[100], n;
	cout<<"Nhap vao so phantu cua mang:"; cin>>n;
	nhap(a,n);
	sapxep(a,n);
	cout<<"Cac phan tu khac nhau la:"<<endl;
	for(int i=0;i<n;i++)
	{
		if(a[i]!=a[i+1])
		{
			cout<<a[i]<<endl;
		}
	}
	return 0;
}