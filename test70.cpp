// test70.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#define N 15
void  CaculateYH(int a[][N], int  n);
void  PrintYH(int a[][N], int  n);
int main(int argc, char* argv[])
{
	int a[N][N],n; 
	printf("Input n(n<15):\n");
	scanf("%d",&n);
	CaculateYH(a,n);
	PrintYH(a,n);
	return 0;
}
void  CaculateYH(int a[][N], int  n)
{
   int i,j;
   for(i=0;i<n;i++)
   {   
	   a[i][0]=1;
	   a[i][i]=1;
	   for(j=1;j<i;j++)
	   {a[i][j]=a[i-1][j]+a[i-1][j-1];}
   }
}
void  PrintYH(int a[][N], int  n)
{
   int i,j;
   for(i=0;i<n;i++)
   {
	   for(j=0;j<=i;j++)
	   {printf("%5d",a[i][j]);}
	   printf("\n");
   }
}