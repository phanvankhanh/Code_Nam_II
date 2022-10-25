#include<iostream.h>
#include<conio.h>
bool kthh(int );
int main()
{
	int n;
 	cout<<"Nhap vao n: "; cin>>n;
 	if(kthh(n))
 		cout<<n<<" la so hoan hao"<<endl;
	else 
		cout<<n<<" khong la so hoan hao"<<endl;
	
}
bool kthh(int a)
{
	int tonguoc=0;
	for(int i=1;i<a;i++)//kiem tra cac so nam trong pham vi tu 1 den n-1 so nao la uoc cua n
	{
		if(a%i==0)
		{
			tonguoc=tonguoc+i;
		}
	}
	if(a==tonguoc)
		return true;
	else
		return false;
}