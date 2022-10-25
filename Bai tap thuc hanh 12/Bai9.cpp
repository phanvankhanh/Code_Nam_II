#include<iostream.h>
#include<iomanip.h>
using namespace std;
#define MAX 100
struct quanLy{
    char mh[20];
    char tch[20];
    float stv;
    float mtn;
};
quanLy hd[MAX];
void nhapHD(quanLy hd[],int n){
    cout<<"/ Nhap Thong Tin Giang Vien /\n";
    for(int i=1;i<=n;i++){
        fflush(stdin);
        cout<<"Ma Ho : "; cin.getline(hd[i].mh,20);
        cout<<"Ten Chu Ho : "; cin.getline(hd[i].tch,20);
        cout<<"So Thanh Vien : "; cin>>hd[i].stv;
        cout<<"Muc Thu Nhap : "; cin>>hd[i].mtn; 
        cout<<endl;
    }
}
void xuatHD(quanLy hd[],int n){
    cout<<"/ In Ra Thong Tin Ho Dan /\n";
    cout<<setw(72)<<setfill('_')<<"_"<<endl<<setfill(' ');
    cout<<"|"<<setw(3)<<"STT";
    cout<<"|"<<setw(16)<<"Ma Ho   ";
    cout<<"|"<<setw(16)<<"Ten Chu Ho   ";
    cout<<"|"<<setw(16)<<"So Thanh Vien   ";
    cout<<"|"<<setw(16)<<"Muc Thu Nhap  "<<"|"<<endl;
    cout<<"|---|----------------|----------------|----------------|----------------|\n";
    for(int i=1;i<=n;i++){	
        if(hd[i].stv > 5){
            cout<<"|"<<setw(3)<<i;
            cout<<"|"<<setw(16)<<hd[i].mh;
            cout<<"|"<<setw(16)<<hd[i].tch;
            cout<<"|"<<setw(16)<<hd[i].stv;
            cout<<"|"<<setw(16)<<hd[i].mtn<<"|"<<endl;
        }
    }
    cout<<setw(72)<<setfill('-')<<"-"<<endl<<setfill(' ');
    cout<<endl;
}
int main(){
    int n;
    cout<<"Nhap so luong ho dan : "; cin>>n; cout<<endl;
    nhapHD(hd,n);
    xuatHD(hd,n);
    system("pause");
}