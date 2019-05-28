// test76.cpp : Defines the entry point for the console application.
//首先从每行中选出最大数，在从选出的n个最大数中选出最小数；* 

#include "stdafx.h"
#include <stdio.h>
#define N 20
int main(void)
{
    int order;
    printf("%s\n","Please enter the order of the matrix:");
    scanf("%d",&order);
    int matrix[N][N];
    int colums,rows;
    printf("Please input the elements of the matrix:\n");
    for(rows = 0;rows < order;rows++){
        for(colums = 0; colums < order;colums++){
            scanf("%d",&matrix[rows][colums]);
        }
    }
    int minInMax = 0;

    for(rows = 0;rows < order;rows++){
        int maxInLine = 0;
        for(colums = 0;colums < order;colums++){
            if(matrix[rows][colums] > maxInLine)
                maxInLine = matrix[rows][colums];
        }
        if(rows == 0){
            minInMax = maxInLine;
        }else{
            if(minInMax > maxInLine)
                minInMax = maxInLine;
        }
    }
    printf("The minimum of maximum number is %d.\n",minInMax);
return 0;
}

