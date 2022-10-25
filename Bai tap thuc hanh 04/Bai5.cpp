#include<iostream.h>
#include<conio.h>
int main()
{
	float a;
	do{
		cout<<"Nhap vao mot so thuc a: ";
		cin>>a;
		if(a<=1 || a>=2)
		{
			cout<<"Nhap lai so nguyen a"<<endl;
		}
	}
	while(a<=1 || a>=2);
	int i=1;
	float S=0;
	do{
		S=S+(float)1/i;
		i++;
	}
	while(S<=a);
	cout<<"So n nho nhat la: "<<i-1<<endl;
	cout<<"Tong la: "<<S<<endl;
	return 0;
}