#include<iostream.h>
#include<string.h>
int main()
{
	int n;
 	char s[50];
	cout<<"Nhap xau: ";
	cin.getline(s,50);
	n=strlen(s);
	int kt=1;
	for(int i=0;i<n;i++)
	{
		if(s[i]!=s[n-i-1])
		{
			kt=0;
			break;
		}
	}
	if(kt)
	{
		cout<<"Xau nhap vao la xau doi xung."<<endl;
	}
	else 
	puts("Xau nhap vao khong phai la xau doi xung.");	
	return 0;
}