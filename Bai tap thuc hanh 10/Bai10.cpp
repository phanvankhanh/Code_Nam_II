#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,*p1,*p2,*p3,*p4;
	p1=&a;
	p2=&b;
	p3=&c;
	p4=&d;
	cout<<"Nhap vao ba so."<<endl;
	cout<<"nhap a: "; cin>>a;
	cout<<"Nhap b: "; cin>>b;
	cout<<"Nhap c: "; cin>>c;
	if(*p1==0)
	{
		if(*p2==0)
		{
			if(*p3==0)
			{
				cout<<"Phuong trinh co vo so nghiem."<<endl;
			}
			else 
			{
				cout<<"Phuong trinh vo nghiem."<<endl;
			}
		}
		else 
		{
			cout<<"Phuong trinh co mot nghiem la: x = "<<(-*(p3)/ *(p2))<<endl;
		}
	}
	else 
	{
		*p4 = *(p2)* *(p2) - 4* *(p1)* *(p3);
		if(*p4<0)
		{
			cout<<"Phuong trinh vo nghiem."<<endl;
		}
		else 
		{
			if(*p4==0)
			{
				cout<<"Phuong trinh co nghiem duy nhat la x = "<<-(float)(*(p2)/2* *(p1))<<endl;
			}
			else 
			{
				cout<<"Phuong trinh co hai nghiem."<<endl;
				cout<<"x1 = "<<(-*(p2)-sqrt(*(p4)))/(2* *(p1))<<endl;
				cout<<"x2 = "<<(-*(p2)+sqrt(*(p4)))/(2* *(p1))<<endl;
			}
		}
	}
	return 0;
}
