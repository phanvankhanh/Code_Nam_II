#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
int main()
{
	int a,b,c,d;
	cout<<"Cac so co 4 chu so abcd ma a+b = c+d"<<endl;
	for (int i=1000;i<=9999;i++)
	 {
		 a = i/1000;
		 b = (i%1000)/100;
		 c = (i%100)/10;
		 d = i%10;
		 if ((a+b)==(c+d))
		  cout<<i<<setw(5);
	 }
	return 0;
}