#include<iostream.h>
#include<string.h>
#include<stdio.h>
#define maxhs 3
#define maxlen 3
int main()
{
	int count=0;
	char ds[maxhs][maxlen];
	char *ptr[maxhs];
	while(count<maxhs)
	{
		cout<<"Nhap ten hoc sinh thu: "<<count+1<<endl;
		gets(ds[count]);
		if(strlen(ds[count])==0)
		break;
		ptr[count]=ds[count];
		++count;
	}
	for(int i=0;i<count-1;i++)
	{
		for(int j=i+1;j<count;j++)
		{
			if(strcmp(ptr[i],ptr[j])>0)
			{
				char *temp;
				temp=ptr[i];
				ptr[i]=ptr[j];
				ptr[j]=temp;
			}
		}
	}
	cout<<"In danh sach: "<<endl;
	for(int i=0;i<count;i++)
	{
		cout<<ptr[i]<<endl;
	}
	return 0;
}              