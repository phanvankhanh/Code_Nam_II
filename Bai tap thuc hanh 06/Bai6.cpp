#include<iostream.h>
#include<conio.h>

//viet ham de quy tinh tich. P=1*3*5*...*(2n-1)

long tich(int c)
{
	if(c==1)
		return 1;
	else 
		return tich(c-1)*(float)(2*c-1);
}
int main()
{
	int n;
	cout<<"nhap n: "; cin>>n;
	cout<<"Tich la: "<<tich(n)<<endl;
	return 0;
}