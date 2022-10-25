#include<iostream.h>
void nhap(int b[], int m)
{
	for(int i=0;i<m;i++)
	{
		cout<<"b["<<i<<"]=";
		cin>>b[i];
	}
}
void xuat(int b[], int m)
{
	for(int i=0;i<m;i++)
	{
		cout<<b[i]<<" ";
	}
}
void timmin(int b[], int m)
{
	int min=b[0];
	int k=0;
	for(int i=0;i<m;i++)
	{
		if(b[i]<min)
		{
			min=b[i];
			k=i;
		}
	}
	cout<<"So be nhat la "<<min<<" tai vi tri "<<k<<endl;
}
int main()
{
	int a[100];
	int n;
	cout<<"Nhap vao so phan tu cua mang: "; cin>>n;
	nhap(a,n);
	cout<<"Gia tri mang ban dau la: "<<endl;
	xuat(a,n);
	cout<<endl;
	timmin(a,n);
	return 0;
}