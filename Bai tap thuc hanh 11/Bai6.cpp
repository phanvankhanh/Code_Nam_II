#include <iostream>
using namespace std;
int *demchan(int b[] , int m )
{
    int *dem;
    int c = 0;
    for( int i = 0; i < m ; i++ )
        {
            if( b[i] % 2 == 0 )
                {
                    c++;
                }
        }
    *dem = c;
    return dem;
}
int main()
{ 
    int n,i,*p;
    cout <<"Nhap so phan tu cua mang n = "; cin >> n;
    int  a[n];
    for(i=0;i<n;i++)	
        {
 	        cout<<"\nNhap gia tri thu "<<i+1<<" la :"; 
 	        cin>>a[i];
        }
    p = demchan(a,n);
    cout<<"Mang co so gia tri chan la : "<< *p <<endl; 
    return 0;
    }