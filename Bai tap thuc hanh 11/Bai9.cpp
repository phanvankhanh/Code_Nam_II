#include <iostream.h>
#include <string.h>
int main()
{
	char *p;
	p=new char[100];
	int n, i, d = 1;
	cout<<"\nNhap xau: ";cin.getline(p,50);
	n = strlen(p);
	if (n==0)
 	{
 		cout<<"Khong co tu nao trong xau";
	 	return 0;
 	}
	for(i=0;i<=n;i++)
	if (p[i]==' ') 
	d++;
	cout<<"So tu trong xau la: "<<d<<endl;
	return 0;

}