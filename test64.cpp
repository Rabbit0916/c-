// test64.cpp : Defines the entry point for the console application.
//输入英文的星期几，查找星期表后输出对应的数字

#include "stdafx.h"
#define N 10
#include <string.h>
int main(int argc, char* argv[])
{
	char a[7][N]={"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
	char s[N];
	int found,count,i=0;
	found=0;
	printf("Enter a string:");
	scanf("%s",&s);
	for(i=0,count=0;i<7;i++)
	{
		if(strcmp(s,a[i])==0)
		{
		found=1;
		break;
		}
		count++;
	}
	if(found==1)
		printf("%s is %d\n",s,count);
	else
		printf("Error\n");
}

