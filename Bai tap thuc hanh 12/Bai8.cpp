#include<iostream.h>
#include<iomanip.h>
using namespace std;
#define MAX 100
struct quanLy{
    char mnv[20];
    char tnv[20];
    float p;
    float hsl;
    int nlv;
    float lcb;
    float t;
    float tl;
};
quanLy nv[MAX];
void nhapNV(quanLy nv[],int n){
    cout<<"/ Nhap Thong Tin Nhan Vien /\n";
    for(int i=1;i<=n;i++){
        fflush(stdin);
        cout<<"Ma Nhan Vien : "; cin.getline(nv[i].mnv,20);
        cout<<"Ten Nhan Vien : "; cin.getline(nv[i].tnv,20);
        cout<<"Phong : "; cin>>nv[i].p;
        cout<<"He So Luong : "; cin>>nv[i].hsl;
        cout<<"Ngay Lam Viec : "; cin>>nv[i].nlv;
        cout<<endl;
    }
}
void lCB(quanLy nv[],int n){
    for(int i=1;i<=n;i++){
        nv[i].lcb = nv[i].hsl * 17500;
    }
}
void thuongNV(quanLy nv[],int n){
    for(int i=1;i<=n;i++){
        if(nv[i].nlv > 22 and nv[i].nlv <= 24){
            nv[i].t = 50000;
        }else if(nv[i].nlv > 24 and nv[i].nlv <= 26){
            nv[i].t = 100000;
        }else if(nv[i].nlv > 26){
            nv[i].t = 300000;
        }
    }
}
void tongLuong(quanLy nv[],int n){
    thuongNV(nv,n);
    for(int i=1;i<=n;i++){
        nv[i].tl = nv[i].lcb + nv[i].t;
    }
}
void xuatNV(quanLy nv[],int n){
    lCB(nv,n);
    tongLuong(nv,n);
    cout<<"/ In Ra Thong Tin Giang Vien Day 5 Mon Tro Len /\n";
    cout<<setw(72)<<setfill('_')<<"_"<<endl<<setfill(' ');
    cout<<"|"<<setw(3)<<"STT";
    cout<<"|"<<setw(16)<<"Ten Nhan Vien   ";
    cout<<"|"<<setw(16)<<"Luong Co Ban   ";
    cout<<"|"<<setw(16)<<"Thuong   ";
    cout<<"|"<<setw(16)<<"Tong Luong  "<<"|"<<endl;
    cout<<"|---|----------------|----------------|----------------|----------------|\n";
    for(int i=1;i<=n;i++){
        cout<<"|"<<setw(3)<<i;
        cout<<"|"<<setw(16)<<nv[i].tnv;
        cout<<"|"<<setw(16)<<nv[i].lcb;
        cout<<"|"<<setw(16)<<nv[i].t;
        cout<<"|"<<setw(16)<<nv[i].tl<<"|"<<endl;
    }
    cout<<setw(72)<<setfill('-')<<"-"<<endl<<setfill(' ');
    cout<<endl;
}
int main(){
    int n;
    cout<<"Nhap so luong nhan vien : "; cin>>n; cout<<endl;
    nhapNV(nv,n);
    xuatNV(nv,n);
    system("pause");
}