#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cout<<"Nhap vao 2 so nguyen :\n";
	cout<<"a = "; cin>>a;
	cout<<"b = "; cin>>b;
	cout<<"Tong : "<<a+b<<endl;
	cout<<"Hieu : "<<a-b<<endl;
	cout<<"Tich : "<<a*b<<endl;
	if(b!=0){
		cout<<"Thuong : "<<(float)a/b<<endl;
	}else{
		cout<<"Khong co thuong !\n";
	}
	
}
