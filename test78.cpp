// test78.cpp : Defines the entry point for the console application.
//�ú���ʵ�ֽ�һ�� 5 X 5 �����еĸ��Խ���Ԫ�ذ��մ�С�����˳��������main�����а������������


#include "stdafx.h"
#include<stdio.h>
#define N 5
int main()
{
    int a[N][N], i, j, b[N], t;
    printf("������һ��%dX%d�����飺\n", N, N);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("ԭʼ����Ϊ��\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%-3d", a[i][j]);
        }
        printf("\n");
    }
    printf("���Խ���Ԫ��Ϊ:\n");
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
    printf("\n�����ĸ��Խ���Ԫ��Ϊ��\n");
    for (i = 0; i < 5; i++)
        printf("%-3d", b[i]);
    return 0;
}