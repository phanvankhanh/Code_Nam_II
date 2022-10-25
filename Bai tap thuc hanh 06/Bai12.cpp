#include<iostream.h>
#include<conio.h>
int chusolonnhat(int max, int a, int i)
{ 
	if(a%10==0)
 		return max;
 	else
	{
		i=n%10;
		if(i>max)
		{
			max=i;
		}
		return chusolonnhat(max,n/10,i)
	}
}
int main()
{
	int n,i;
	cout<<"Nhap n: "; cin>>n;
	cout<<"chu so lon nhat la: "<<chusolonnhat(Max,n,i)<<endl;
	return 0;
}