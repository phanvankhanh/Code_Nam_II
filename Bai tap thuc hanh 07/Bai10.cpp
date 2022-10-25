#include <iostream.h>
#include <iomanip.h>
void input(int b[],int m)
{
  for (int i=0;i<m;i++)
  {
  	 cout<<"b["<<i<<"]="; cin>>b[i];
  }
}
void output(int b[], int m)
{ 
	for(int i=0;i<m;i++)
		cout<<b[i]<<"\t";
}
void insert(int a[], int n, int x)
{
 	int pos = n;
 	while ((pos>0) && (a[pos-1]>x))
 	{ 
	 	a[pos] = a[pos - 1];
 		pos --;
 	}
 	a[pos] = x;
}
void sapxep(int b[],int m)
{
 	for (int i=0; i<m-1;i++)
	for (int j=i+1; j<m; j++)
 	if (b[i]>b[j])
 	{
 		int tg=b[i];
 		b[i]=b[j];
 		b[j]=tg;
 	} 
}
int main()
{
	int a[100], n, x;
 	cout<<"Nhap so phan tu mang: "; cin>>n;
	input(a,n);
 	sapxep(a,n);
 	cout<<"Nhap phan tu can them: "; cin>>x;
 	insert(a,n,x);
 	output(a,n);
 	return 0;
}