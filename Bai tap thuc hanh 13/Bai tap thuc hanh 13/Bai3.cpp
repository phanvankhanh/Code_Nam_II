#include<iostream.h>
#include<conio.h>
typedef struct 
{
	float thuc;
	float ao;
}sophuc;
sophuc cong(sophuc p, sophuc q)
{
	sophuc kq;
	kq.thuc=p.thuc+q.thuc;
	kq.ao=p.ao+q.ao;
	return kq;
}
sophuc tru(sophuc p, sophuc q)
{
	sophuc kq;
	kq.thuc=p.thuc-q.thuc;
	kq.ao=p.ao-q.ao;
	return kq;
}
void in(sophuc a)
{
	cout<<"("<<a.thuc<<","<<a.ao<<")"<<endl;
}
int main()
{
	sophuc x,y;
	cout<<"Nhap so phuc x"<<endl;
	cout<<"Phan thuc: ";
	cin>>x.thuc;
	cout<<"Phan ao: ";
	cin>>x.ao;
	cout<<"Nhap so phuc y"<<endl;
	cout<<"Phan thuc: ";
	cin>>y.thuc;
	cout<<"Pha ao: ";
	cin>>y.ao;
	cout<<"x+y = ";
	in(cong(x,y));
	cout<<"x-y = ";
	in(tru(x,y));
	return 0;
	
	
}