#include<iostream.h>
#include<math.h>
int main()
{
	float a,b,c,d,max,min;
	int luachon;
	cout<<"Nhap a: "; cin>>a;
	cout<<"Nhap b: "; cin>>b;
	cout<<"Nhap c: "; cin>>c;
	cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<"\n";
	cout<<"++ 1. Kiem tra a,b,c co tao thanh 3 canh cua tam giac hay khong? ++"<<"\n";
	cout<<"++ 2. Giai phuong trinh ax^2+bx+c=0.                             ++"<<"\n";
	cout<<"++ 3. Tim so lon nhat, so nho nhat.                              ++"<<"\n";
	cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<"\n";
	cout<<"Nhap lua chon cua ban: "; cin>>luachon;
	switch(luachon)
	{
		case 1:
		if(a+b<c || a+c<b || b+c<a)
		{
			cout<<"Khong tao thanh 3 canh cua tam giac."<<endl;
		}
		else 
		{
			cout<<"Tao thanh 3 canh cua tam giac."<<endl;
		}
		break;
		case 2:
		if(a==0)
		{
			if(b==0)
			{
				if(c==0)
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
				cout<<"Phuong trinh co nghiem duy nhat: x = "<<-c/b<<endl;
			}
		}
		else
		{
			d=(b*b)-(4*a*c);
			if(d<0)
			{
				cout<<"Phuong trinh vo nghiem."<<endl;
			}
			else
			{
				if(d==0)
				{
					cout<<"Phuong trinh co nghiem duy nhat: x = "<<-b/(2*a)<<endl;
				}
				else{
					cout<<"Phuong trinh co hai nghiem phan biet: "<<"\n";
					cout<<"x1 = "<<(-b-sqrt(d)/(2*a))<<endl;
					cout<<"x2 = "<<(-b+sqrt(d)/(2*a))<<endl;
				}
			}
		}
		break;
		case 3:
		max=min=a;
		if(b>a)
		max=b;
		if(c>a)
		max=c;
		if(b<a)
		min=b;
		if(c<a)
		min=c;
		cout<<"So lon nhat la: "<<max<<endl;
		cout<<"So nho nhat la: "<<min<<endl;
		break;
		default:
		cout<<"Ban khong chon lua chon nao."<<endl;
		break;
	}
}