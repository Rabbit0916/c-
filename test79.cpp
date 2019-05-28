// test79.cpp : Defines the entry point for the console application.
//输入任意5-5的二维数组，并判断是否为魔幻矩阵，

#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[5][5],i,j,flag=1,sum,temp;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf(" %d",&a[i][j]);
        }
    }
    for(i=0;i<5;i++)
    {
        sum=0;
        for(j=0;j<5;j++)
        {
            sum=sum+a[i][j];
        }
        temp=sum;
        if(i>0)
        {
            if(sum!=temp)
            {
                flag=0;
            }
        }
    }
    for(j=0;j<5;j++)
    {
        sum=0;
        for(i=0;i<5;i++)
        {
            sum=sum+a[i][j];
        }
        temp=sum;
        if(j>0)
        {
            if(sum!=temp)
            {
                flag=0;
            }
        }
    }
    sum=0;
    for(i=0;i<5;i++)
    {
        sum=sum+a[i][j];
    }
    if(temp!=sum)
    {
        flag=0;
    }
    sum=a[4][0]+a[3][1]+a[2][2]+a[1][3]+a[0][4];
    if(sum!=temp)
    {
        flag=0;
    }
    if(flag==0)
    {
        printf("It is not a magic square!\n");
    }
    else
    {
        printf("It is a magic square!\n");
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                printf("%4d",a[i][j]);
            }
            printf("\n");
        }
    }
}


