// test82.cpp : Defines the entry point for the console application.
//�������һ�����Ȳ�����30���ַ������ַ����������ո񣩣�����ƺ���ʵ���ַ������������򣨽���ͬ�ַ������������У���

#include "stdafx.h"

#include <stdio.h>                    
#include <string.h>                  
#define M 30    
void  ys(char ch1[]);
int main(void)            
{ 
    char ch[M];   
    printf("�������ַ�����\n");               
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
    printf("�����������ַ���Ϊ:\n");          
    printf("%s\n", str1);                 
 }