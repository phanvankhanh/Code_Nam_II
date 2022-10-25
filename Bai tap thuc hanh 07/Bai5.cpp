#include<iostream.h>
int main()
{
	 int s[100],n;
    cout << "Mang co so phan tu la : ";cin >> n;
    for (int i=1;i<=n;i++)
    {
        cout << "s["<<i<<"] = ";cin >> s[i];
    }
    for (int j = n;j>=1;j--)
    {
        cout << s[j]<< "\t";
    }
}