// test81.cpp : Defines the entry point for the console application.
//将一个字符数组（字符串长度小于30）重新排列，非数字字符排在前面，数字排在后面，并不改变原来字符之间以及数字之间的顺序，并写主函数对其进行测试。

#include "stdafx.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 30  //1
void  fun(char * s,char chLetter[]) 
{                  
    char chNumber[N]; 
    int i,j,k;  
    i = 0;  
    j = 0;
    k = 0;
    for (i = 0; s[i]!=0; i++)
    {                  
        if (s[i] >= '0' && s[i] <= '9')
        {                  
            chNumber[k] = s[i];//1
            k++;
        }
        else  
        {chLetter[j] = s[i];
            j++;
        }
    }
    chLetter[j] = '\0';
    chNumber[k] = '\0';
    strcat(chLetter, chNumber);
}                  
int main()
{                  
    char s[N],x[N];
    int i,m; 
    printf("请输入字符串(30字符以内):\n");
    gets(s);
    fun(s,x);
    printf("结果为：\n");
    puts(x);
    return 0;
}