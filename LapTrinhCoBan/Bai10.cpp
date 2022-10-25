#include<bits/stdc++.h>
using namespace std;
int main(){
	float R;
	double PI = 3.14;
	cout<<"Ban kinh hinh tron = "; cin>>R;
	if(R < 0){
		cout<<"Nhap lai ban kinh hinh tron : "; cin>>R;
	}else{
		cout<<"Dien tich hinh tron = "<<PI*R*R<<endl;
	}
	
}
