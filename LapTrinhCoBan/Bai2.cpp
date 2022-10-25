#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cout<<"Nhap nam : "; cin>>a;
	if(a % 4 == 0){
		if(a % 100 != 0 || a % 400 != 0){
			cout<<""<<a<<" La nam nhuan";
		}
	}else{
		cout<<""<<a<<" Khong la nam nhuan";
	}
}
