#include<iostream.h>
#include<string.h>
int main()
{
	char s[50];
	cout<<"Nhap xau: ";
	cin.getline(s,50);
	cout<<"Xau da nhap la: "<<s<<endl;
	int i,j,n;
	n=strlen(s)-1;
	while(s[n]==' ')
	{
		s[n]='\0';
	}
	while(s[0]==' ')
	{
		for(int i=0;i<n;i++)
		{
			s[i]=s[i+1];
		}
	}
	i=0;
	while(s[i]!='\0')
	{
		if(s[i]==' ')
		{
			if(s[i-1]==' ')
			{
				for(j=i;j<n;j++)
				{
					s[j]=s[j+1];
				}
				j--;
			}
		}
		i++;
	};
	cout<<"Chuan hoa xau da nhap la: "<<s<<endl;
}