#include<iostream.h>
#include<math.h>
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
void sapxep(int b[], int m)
{
	for(int i=0;i<m-1;i++)
		for(int j=i+1;j<m;j++)
		{
			if(b[i]<b[j])
			{
				int tg;
				tg=b[i];
				b[i]=b[j];
				b[j]=tg;	
			}
				
		}	
}
int main()
{
	int a[100];
	int n;
	cout<<"Nhap vao so phan tu cua mang: "; cin>>n;
	nhap(a,n);
	cout<<"Mang truoc khi sap xep la: "<<endl;
	xuat(a,n);
	sapxep(a,n);
	cout<<endl;
	cout<<"Mang sau khi sap xep la: "<<endl;
	xuat(a,n);
	cout<<endl;
	return 0;
}