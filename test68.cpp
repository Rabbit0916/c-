// test68.cpp : Defines the entry point for the console application.
//在主函数中输入一个3X4的整型矩阵，求其转置矩阵并存放在另一个二维数组中 

#include "stdafx.h"
void Convert(int a[3][4], int b[4][3]);
int main(int argc, char* argv[])
{
	int a[3][4],b[4][3],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			scanf("%d",&a[i][j]);
	}
    Convert(a,b);
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{printf("%5d",b[i][j]);}
		printf("\n");
	}
return 0;
}
void Convert(int a[3][4], int b[4][3])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			b[j][i]=a[i][j];
	}
}
