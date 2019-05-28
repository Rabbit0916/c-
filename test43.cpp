// test40.cpp : Defines the entry point for the console application.
//用函数编程实现计算字符串中子串出现的次数。

#include "stdafx.h"
#include<string.h>
int FindString(char *str,char *sub);
#define N 80
int main(int argc, char* argv[])
{
	char str1[N],str2[N];
	gets(str1);
	gets(str2);
	printf("%d\n",FindString(str1,str2));
    return 0;
}
int FindString(char *str,char *sub)
{
	int sum=0;
	char *p=sub;
	while(*str!='\0')
	{
		if(*str==*sub)
		{
			while(*str==*sub&&*str!='\0')
			{
				str++;
				sub++;
			}
		}
		else str++;
		if(*sub=='\0')
			sum++;
		sub=p;
	}

	return sum;
}