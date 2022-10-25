#include<iostream.h>
#include<conio.h>
int main()
{
	int n,i=1;
	long t,laisuat,tongtien;
	cout<<"Nhap so tien gui: ";
	cin>>t;
	cout<<"Nhap so thang gui: ";
	cin>>n;
	cout<<"nhap so tien lai: ";
	cin>>laisuat;
	while(i<=n)
	{
		tongtien=t+t*laisuat;
		t=tongtien;
		i++;
	}
	cout<<"So tien nguoi do duoc linh sau "<<n<<" thang la: "<<tongtien<<endl;
	return 0;
}