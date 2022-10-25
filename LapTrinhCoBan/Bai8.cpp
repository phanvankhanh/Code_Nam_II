#include<bits/stdc++.h>
using namespace std;
int main(){
	int ktra,gky,cky;
	float tbinh;
	if(ktra>=0 && ktra<=10){
		cout<<"Diem kiem tra la : "; cin>>ktra;
	}else{
		cout<<"Loi nhap";
	}
	if(gky>=0 && gky<=10){	
	cout<<"Diem thi giua ky la : "; cin>>gky;
	}else{
		cout<<"Loi nhap";
	}
	if(cky>=0 && cky<=10){
		cout<<"Diem thi cuoi ky la : "; cin>>cky;
	}else{
		cout<<"Loi nhap";
	}
	tbinh=(ktra+gky+cky)/3;
	cout<<"Diem trung binh la : "<<tbinh<<endl<<endl;
	if(tbinh >= 9.0){
		cout<<"Xep loai gioi";
	}else{
		if(tbinh >=7.0 && tbinh<=9.0){
			cout<<"Xep loai kha";
		}else{
			if(tbinh >=5.0 && tbinh<=7.0){
				cout<<"Xep loai trung binh";
			}else{
				if(tbinh < 5.0){
					cout<<"Xep loai yeu";
				}
			}
		}
	}
}
