// test81.cpp : Defines the entry point for the console application.
//��һ���ַ����飨�ַ�������С��30���������У��������ַ�����ǰ�棬�������ں��棬�����ı�ԭ���ַ�֮���Լ�����֮���˳�򣬲�д������������в��ԡ�

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
    printf("�������ַ���(30�ַ�����):\n");
    gets(s);
    fun(s,x);
    printf("���Ϊ��\n");
    puts(x);
    return 0;
}