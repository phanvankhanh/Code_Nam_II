#include<iostream.h>
#include<conio.h>
void nhap(int x[], int y)
{
	for(int i=0;i<y;i++)
	{
		cout<<"x["<<i<<"]=";
		cin>>x[i];
	}
}
void xuat(int x[], int y)
{
	for(int i=0; i<y;i++)
	{
		cout<<x[i]<<" ";
	}
}
void sapxep(int x[], int y)
{
	for(int i=0;i<y-1;i++)
		for(int j=i+1;j<y;j++)
		{
			if(x[i]>x[j])
			{
				int tg;
				tg=x[i];
				x[i]=x[j];
				x[j]=tg;	
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
	cout<<"Mang sanu khi sap xep la: "<<endl;
	xuat(a,n);
	cout<<endl;
	return 0;
}