// test80.cpp : Defines the entry point for the console application.
//从键盘输入一个3*3的矩阵并将其存入一个二维整型数组中，检验其是否为幻方矩阵，并将其按指定格式显示到屏幕上。

#include "stdafx.h"

#include  <stdio.h>
#define   N  3
int main(void)
{        
    int  i, j;
    int  x[N][N];
    int  rowSum[N], colSum[N], diagSum1, diagSum2;
    int  flag = 1;
    for (i = 0; i <N; i++)
        for (j = 0; j <N; j++)
        {        
            scanf("%d", &x[i][j]);
        }
  
     
    for (i = 0; i < N; i++)
    {        
        rowSum[i] = 0;
        for (j = 0; j < N; j++)
        {        
            rowSum[i] = rowSum[i] + x[i][j];
        }
    }
    for (j = 0; j < N; j++)
    {        
        colSum[j] = 0;
        for (i = 0; i < N; i++)
        {        
            colSum[j] = colSum[j] + x[i][j];
        }
    }
    diagSum1 = 0;
    for (j = 0; j < N; j++)
    {        
        diagSum1 = diagSum1 + x[j][j];
    }
    diagSum2 = 0;
    for (j = 0; j < N; j++)
    {        
        diagSum2 = diagSum2 + x[j][N - 1 - j];
    }
    if (diagSum1 != diagSum2)
    {        
        flag = 0;
    }
    else
    {        
        for (i = 0; i < N; i++)
        {        
            if ((rowSum[i] != diagSum1) || (colSum[i] != diagSum1))
                flag = 0;
        }
    }
    if (flag)
    {        
        printf("It is a magic square!\n");
         
    }
    else
    {        
        printf("It is not a magic square!\n");
    }
    return 0;
}