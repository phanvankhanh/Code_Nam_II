#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,k;
	cout<<"Nhap 3 so nguyen : \n";
	cin>>i>>j>>k;
	int Max = i;
	int Min = i;
	if(Max < j){
		Max = j;
	}
	if(Max < k){
			Max = k;
		
	}
	cout<<"So lon nhat : "<<Max<<endl;
	if(Min > j){
		Min = j;
	}
	if(Min > k){
			Min = k;
		}
	
	cout<<"So be nhat : "<<Min<<endl;
}
