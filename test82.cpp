// test82.cpp : Defines the entry point for the console application.
//假设给定一个长度不超过30的字符串（字符串不包含空格），请设计函数实现字符串的重新排序（将相同字符进行连续排列）。

#include "stdafx.h"

#include <stdio.h>                    
#include <string.h>                  
#define M 30    
void  ys(char ch1[]);
int main(void)            
{ 
    char ch[M];   
    printf("请输入字符串：\n");               
    scanf("%s", ch);    
    ys(ch);        
    return 0;
}                      
 void  ys(char ch1[])      
 {   
   char str1[M];              
   char s;                     
   int i = 0, j = 0, count = 1, k = 0;  
 
  for (i = 0; i < strlen(ch1); i++)                      
    {                      
        if (ch1[i] != ' ')                                
        {                      
            s = ch1[i];                                          
            for (j = 0; j < strlen(ch1); j ++)                  
            {                      
                if (s == ch1[j])                     
                {                      
                    str1[k] = ch1[j];                     
                    k++;
                    ch1[j] = ' ';                     
                }
                 str1[k+1]='\0';                           
            }
        }
  
    }
    printf("重新排序后的字符串为:\n");          
    printf("%s\n", str1);                 
 }