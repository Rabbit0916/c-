// test83.cpp : Defines the entry point for the console application.
//�ú���ʵ�ִ�һ������ΪN(N<30)���ַ������ҳ���
//ͬ�ַ����ɵ���ַ��������硰abel123dddjk"������ͬ�ַ����ɵ�
//��ַ���Ϊ��ddd��

#include "stdafx.h"
#include<stdio.h>                               
#define N 30                        
char Find(char _srt[], int* count)               
{                   
    char *p = _srt;              
    int tmp = 1;                            
    char _ch;
 
    while (*p)                    
    {                   
        if (*p == *(p + 1))             
        {                   
            tmp++;                
        }
        else
        {                   
            if (tmp > *count)               
            {                   
                *count = tmp;               
                _ch = *p;
            }
            else if (tmp == *count)            
            {                   
                *count = tmp;
                _ch = *p;                  
            }
            tmp = 1;                      
        }
        p++;                           
    }
    return _ch;
}                   
 
int main()
{                   
    char srt[N];                  
    int count = 0;
    int i = 0;
    char ch ;
 
    printf("������һ���ַ�����\n");
    scanf("%s", &srt);                  
 
    ch = Find(srt, &count);               
 
    printf("��ַ�����\n");
    for (i = 0; i < count; i++)                
    {                   
        printf("%c", ch);              
    }
    return 0;
}

