#include<bits/stdc++.h>
using namespace std;
int main(){
	int doanhso;
	cout<<"Doanh so cong ty B la (trieu) : "; cin>>doanhso;
	if(doanhso >=0 && doanhso <=100){
		cout<<"Hoa hong nhan duoc la : "<<doanhso*0.05<<endl;
	}else{
		if(doanhso >= 100 && doanhso <= 300){
			cout<<"Hoa hong nhan duoc la : "<<doanhso*0.1<<endl;
		}else{
			if(doanhso > 300){
				cout<<"Hoa hong nhan duoc la : "<<doanhso*0.2<<endl;
			}
		}
	}
}
