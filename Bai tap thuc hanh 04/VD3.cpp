#include<iostream.h>
#include<conio.h>
//nhap so den khi nao nhap so 0 thi dung lai.tinh trung binh cong cac so vua nhap
int main()
{
	int n,dem=0,S=0;
	do{
		cout<<"nhap n: ";
		cin>>n;
		dem=dem+1;
		S=S+n;
	}
	while(n!=0);
	cout<<"tong cac so va nhap la:"<<S<<endl;
	cout<<"trung binh cong cac so vua nhap la "<<(float)S/dem;
}