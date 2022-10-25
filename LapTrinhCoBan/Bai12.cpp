#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cout<<"Nhap vao 2 so a , b :\n"; cin>>a>>b;
	if(a == 0){
        if(b == 0){
            cout<<"Bat phuong trinh vo so nghiem !!!"<<endl;
        }else{
            cout<<"Bat phuong trinh vo nghiem !!!"<<endl;
        }
    }else{
    	if(a>0){
    		cout<<"Bat phuong trinh co nghiem x > "<<(float)-b/a<<endl;
		}else{
			cout<<"Bat phuong trinh co nghiem x < "<<(float)-b/a<<endl;
		}
    	
	}
}
