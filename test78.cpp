// test78.cpp : Defines the entry point for the console application.
//用函数实现将一个 5 X 5 数组中的副对角线元素按照从小到大的顺序排序并在main函数中把排序结果输出。


#include "stdafx.h"
#include<stdio.h>
#define N 5
int main()
{
    int a[N][N], i, j, b[N], t;
    printf("请输入一个%dX%d的数组：\n", N, N);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("原始数组为：\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%-3d", a[i][j]);
        }
        printf("\n");
    }
    printf("副对角线元素为:\n");
    for (i = 0; i < 5; i++)
        printf("%-3d", a[i][4 - i]);
    for (i = 0; i < 5; i++)
    {
        b[i] = a[i][4 - i];
    }
    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (b[i] > b[j])
            {
                t = b[i];
                b[i] = b[j];
                b[j] = t;
            }
        }
    }
    printf("\n排序后的副对角线元素为：\n");
    for (i = 0; i < 5; i++)
        printf("%-3d", b[i]);
    return 0;
}