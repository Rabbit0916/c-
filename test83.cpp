// test83.cpp : Defines the entry point for the console application.
//用函数实现从一个长度为N(N<30)的字符串中找出相
//同字符构成的最长字符串。比如“abel123dddjk"其中相同字符构成的
//最长字符串为“ddd”

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
 
    printf("请输入一个字符串：\n");
    scanf("%s", &srt);                  
 
    ch = Find(srt, &count);               
 
    printf("最长字符串：\n");
    for (i = 0; i < count; i++)                
    {                   
        printf("%c", ch);              
    }
    return 0;
}

