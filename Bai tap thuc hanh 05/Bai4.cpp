#include <iostream.h>
using namespace std; 
float lt(int x, int y)
{ 
	float p = 1;
 	for (int i = 1; i<=y; i++)
 		p = p*x; //hoac p *= x;
 		return p;
}
int main()
{
 int a, n;
 cout << "Nhap co so a: "; cin >> a;
 cout << "Nhap so mu n: "; cin >> n;
 cout<<a<<"^"<<n<<"= "<<lt(a, n)<<endl;
 return 0;
}
