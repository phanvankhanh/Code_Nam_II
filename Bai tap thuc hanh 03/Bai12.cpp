#include <iostream.h>
#include <iomanip.h>
int main()
{
	float t;
	int a,b,c,d,s=0;
    cout<<"nhap vao so tien can doi :";cin>>t;
    cout<<setw(15)<<"so to 1000"<<setw(15)<<"so to 2000"<<setw(15)<<"so to 5000"<<setw(15)<<"so to 10000"<<endl;
	for (int a=0;a<=t/1000;a++)
	for (int b=0;b<=t/2000;b++)
	for (int c=0;c<=t/5000;c++)
	for (int d=0;d<=t/10000;d++)
	if(a*1000+b*2000+c*5000+d*10000==t)
	{
	cout<<setw(15)<<a<<setw(15)<<b<<setw(15)<<c<<setw(15)<<d<<endl;
	s++;
	}
	cout<<"co tat ca "<<s<<" cach doi";
	return 0;
}