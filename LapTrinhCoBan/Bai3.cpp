#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cout<<"Nhap 2 so a , b : \n"; cin>>a>>b;
	if(a == 0){
        if(b == 0){
            cout<<"Phuong trinh vo so nghiem !!!"<<endl;
        }else{
            cout<<"Phuong trinh vo nghiem !!!"<<endl;
        }
    }else{
		cout<<"Phuong trinh co nghiem = "<<(float)-b/a<<endl;
	}
}
