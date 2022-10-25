#include <iostream.h>
#include <conio.h>
using namespace std;
int *MaxA(int data[],int n)
{
	int *max=data;
	int i;
	for(i=1;i<n;i++)
	if(*max<*(max+i))
	*max=*(max+i);
	return max;
}
int main()
{
	int n,i,*p;
	cout<<"Nhap so phan tu cua mang n=: "; cin>>n;
	int A[n];
	for(i=0;i<n;i++)
	{
		cout<<"\n Nhap gia tri thu "<<i+1<<" la:";
		cin>>A[i];
	}
	 p = MaxA(A,n);
	cout<<"Gia tri lon nhat la: "<<*p<<endl;
	return 0;
}
