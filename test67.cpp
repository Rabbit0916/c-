// test67.cpp : Defines the entry point for the console application.
//找出按字典顺序排在最前面的国名

#include "stdafx.h"
#include<string.h>
#define N 10
int main(int argc, char* argv[])
{
	char a[5][N];
	int j,i=0;
	char temp[N];
	printf("Input five countries' names:\n");
	do
	{
		gets(a[i]);
		i++;
	}while(i<5);
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(strcmp(a[i],a[j])>0)
			{strcpy(temp,a[i]);
			strcpy(a[i],a[j]);
			strcpy(a[j],temp);}
		}
	}
	printf("The minimum is:%s\n",a[0]);
	return 0;
}

