// test69.cpp : Defines the entry point for the console application.
//编程计算并输出n×n阶矩阵的转置矩阵
#include "stdafx.h"
#define N 10
void Transpose(int a[][N], int n);
void InputMatrix(int a[][N], int n);
void PrintMatrix(int a[][N], int n);
int main(int argc, char* argv[])
{
	int a[N][N],n;
	printf("Input n:\n");
	scanf("%d",&n);
    InputMatrix(a,n);
    Transpose(a,n);
    PrintMatrix(a,n);

return 0;
}
void InputMatrix(int a[][N], int n)
{   
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
}
void Transpose(int a[][N], int n)
{
	int i,j,b[N][N];
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
		{b[j][i]=a[i][j];}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j]=b[i][j];
		}
	}
}
void PrintMatrix(int a[][N], int n)
{     int i,j;
       printf("The transposed matrix is:\n");
    	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{printf("%5d",a[i][j]);}
		printf("\n");
	}
}
