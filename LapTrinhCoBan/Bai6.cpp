#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	float p,S;
	cout<<"Nhap thong so 3 canh :\n";
	cout<<"a = "; cin>>a;
	cout<<"b = "; cin>>b;
	cout<<"c = "; cin>>c;
	if(a+b<=c || a+c<=b || b+c<= a){
		cout<<"Tam giac khong hop le";
		system("pause");
		cout<<endl;
	}
	p=(float)(a+b+c)/2;
	S=sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<"Dien tich tam giac la = "<<S<<endl;
	
}
