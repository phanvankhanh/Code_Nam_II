#include<iostream>
#include<iomanip>
#include<cstring>
#define MAX 100
using namespace std;
typedef struct{
    char msv[20];
    char ht[20];
    int ns;
    float dtb;
}sinhVien;
sinhVien a[MAX];
void nhapSV(sinhVien a[],int n){
    cout<<"/ Nhap Thong Tin Sinh Vien /\n";
    for(int i=1;i<=n;i++){
        fflush(stdin);
        cout<<"Ma Sinh Vien : "; cin.getline(a[i].msv,20);
        cout<<"Ho Ten : "; cin.getline(a[i].ht,20);
        cout<<"Nam Sinh : "; cin>>a[i].ns;
        cout<<"Diem Trung Binh : "; cin>>a[i].dtb;
        cout<<endl;
    }
}
void xuatSV(sinhVien a[],int n){
    cout<<"/ In Ra Thong Tin Sinh Vien Sau Khi Sap Xep /\n";
    cout<<setw(72)<<setfill('_')<<"_"<<endl<<setfill(' ');
    cout<<"|"<<setw(3)<<"STT";
    cout<<"|"<<setw(16)<<"Ma Sinh Vien   ";
    cout<<"|"<<setw(16)<<"Ho Ten   ";
    cout<<"|"<<setw(16)<<"Nam Sinh   ";
    cout<<"|"<<setw(16)<<"Diem Trung Binh  "<<"|"<<endl;
    cout<<"|---|----------------|----------------|----------------|----------------|\n";
    for(int i=1;i<=n;i++){	
            cout<<"|"<<setw(3)<<i;
            cout<<"|"<<setw(16)<<a[i].msv;
            cout<<"|"<<setw(16)<<a[i].ht;
            cout<<"|"<<setw(16)<<a[i].ns;
            cout<<"|"<<setw(16)<<a[i].dtb<<"|"<<endl;
    }
    cout<<setw(72)<<setfill('-')<<"-"<<endl<<setfill(' ');
    cout<<endl;
}
void sapXep(sinhVien a[],int n){
    sinhVien b[1];
    for(int i;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(a[i].ns < a[j].ns){
                b[i] = a[j];
                a[j] = a[i];
                a[j] = b[i];
            }
        }
    }
    xuatSV(a,n);
}
int main(){
    int n;
    cout<<"Nhap So Sinh Vien : "; cin>>n;
    nhapSV(a,n);
    sapXep(a,n);
  
}