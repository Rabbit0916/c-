// test23.cpp : Defines the entry point for the console application.
//编写函数判断B是不是A的子串

#include "stdafx.h"
#include<string.h>
#define N 100
char panduan(char a[],char b[]);
int main(int argc, char* argv[])
{
	char str1[N],str2[N];
	int temp;
	printf("Please input the first str:");
	scanf("%s",&str1);
	printf("Please input the second str:");
	scanf("%s",&str2);
	temp=panduan(str1,str2);
    if(temp==1)
	{
		printf("YES\n");
	}
	else
	{printf("NO\n");}
	return 0;
}
char panduan(char a[],char b[])
{
	int m,n,i,j,flag;
	m=strlen(a);
	n=strlen(b);
	flag=0;
	for(i=0;i<m;i++)
	{
		if(a[i]==b[0])
		{
			for(j=1;j<n;j++)
			{
				if(b[j]==a[i+j])
				{flag=1;}
				else flag=0;
			}
		}
	}return flag;
}
