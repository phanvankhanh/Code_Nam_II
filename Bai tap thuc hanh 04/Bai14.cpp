#include<iostream.h>
#include<conio.h>
int main()
{
	int	p, q, x, y;	
	cout<<"Nhap vao hai so nguyen p,q"<<endl; 
	cout<<"Nhap vao p: ";
	cin>>p;
	cout<<"Nhap vao q: ";
	cin>>q;
	x = p; y = q;
	while (x!=y)
	{	
		if (x>y)
		 	x = x - y;
		else
			y = y - x;
	}
  	cout<<"Uoc chung lon nhat la "<<x<<endl;
  	cout<<"Boi chung nho nhat la "<<(p*q)/x<<endl;
 	return 0;

}