#include<bits/stdc++.h>
using namespace std;
int main(){
    float a,b,c;
    float x1,x2;
    do{
    	if(a==0){
        cout<<"Nhap a : "; cin>>a;
    }else{
    	cout<<"Nhap lai a de thanh ptrinh bac 2 : "; cin>>a;
	}
        cout<<"Nhap b : "; cin>>b;
        cout<<"Nhap c : "; cin>>c;
    }
    while(!a);
    float delta = b*b - 4*a*c;
    if(delta<0){
        x1=x2=0.0;
        cout<<"Phuong trinh vo nghiem."<<endl;
    }
    else if(delta==0){
        x1 = x2 = (float) -b/(2*a);
        cout<<"Phuong trinh co nghiem kep"<<x1;
    }
    else{
        delta = sqrt(delta);
        x1 = (float) (-b + delta) / (2*a);
        x2 = (float) (-b - delta) / (2*a);
        cout<<"Phuong trinh co hai nghiem phan biet"<<endl;
        cout<< "x1 = "<<x1<<endl;
        cout<< "x2 = "<<x2<<endl;
	}
}

