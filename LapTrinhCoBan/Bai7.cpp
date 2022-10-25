#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,C;
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
	C=a+b+c;
	p=(float)C/2;
	S=sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<"Chu vi tam giac la = "<<C<<endl;
	cout<<"Dien tich tam giac la = "<<S<<endl;
	if(a==b || b==c || c==a){
		cout<<"Day la tam giac can";
	}else{
	if(a==b && b==c && c==a){
		cout<<"Day la tam giac deu";
	}else{
	if(a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b){
		cout<<"Day la tam giac vuong";
	}else{
		cout<<"Day la tam giac thuong";
	}
	}
	}
}
