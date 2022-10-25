#include<bits/stdc++.h>
using namespace std;
int main(){
	int soDien;
	cout<<"Nhap So Dien (kWh) : "; cin>>soDien;
	if(soDien < 0){
		cout<<"Nhap lai so dien (kWh) : "; cin>>soDien;
	}else{
		if(soDien >= 0 && soDien <= 100){
			cout<<"Tien dien phai tra (d) : "<<soDien*500<<endl;
		}else{
			if(soDien >= 100){
			cout<<"Tien dien phai tra (d) : "<<soDien*800<<endl;
			}
		}
	}
}
