#include<iostream.h>
int reverse_num(int n)
{ 
  int reverse = 0; 
  while (n > 0) 
  {  	reverse = reverse * 10 + n % 10;
    	n /= 10;
  }
  return reverse;
}
int main()
{
	int n;	
    cout <<"Nhap so tu nhien: "; cin>>n;   
    if( reverse_num(n) == n) 
	cout << n << " la so doi xung"<<endl;
    else 
	cout << n << " khong phai la la so doi xung"<<endl;
    return 0;

}