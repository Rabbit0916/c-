// test84.cpp : Defines the entry point for the console application.
//ģ���̳���Ա�����Ի�Ա��������š����ֽ��й������ýṹ�������¼��Ա����������źͻ��֣����������������洢��Ա����Ϣ��
//Ҫ��ʵ�����¹��ܣ�

#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
struct member{                   
    char num[20];
    char name[20];
    int total;
    struct member *next;
   }*head;   //1
void creat();
void show(); 
void upd(char name[]);
void Free();
int main()
{                    
    char name[20]; //1
    creat(); //1
    printf("������Ҫ�޸ĵĻ�Ա��ţ�\n");
    scanf("%s",name); //1
    upd(name); //2
    Free(); //1
    return 0;
}                    
void  creat() //2
{                    
    struct member *q ,*tail;//1
    head = (struct member *)malloc(sizeof(struct member)); 
    head->next = NULL;
    tail = head; 
    char flag = 'Y';
    while(flag=='Y') //1
    {                    
        printf("����������ÿ����Ա�ı�š����������֣� \n");
        q = (struct member *)malloc(sizeof(struct member));//1
        q->next = NULL; //1
        scanf("%s %s %d",q->num,q->name,&q->total);//1
        tail->next = q;  //1
        tail = q;  //1
        printf("�Ƿ��������,��Y���������룬�������ͽ���.\n");
        getchar();
        flag = getchar(); //1
      }
}                    
void show() //2
{                    
    struct member *out;  //1
        out = head->next;  //1
    printf("���������ÿ����Ա�ı�š����������֣� \n");
    while(out)//1
    {                    
    printf("%s %s %d\n", out->num,out->name,out->total);//1
    out = out->next;  
    }
}                    
//������ϵ�˵���Ϣ
void upd(char name[]) //2
{                    
    struct member *p; //1
     int  mark;
        mark = 0;                           //����Ƿ��ҵ�����ϵ��
        p = head;    //1                           //��ͷ���head��ֵ��p
        if(head == NULL)  
        {                 //���������ͷ���Ϊ�գ����ѯ����
            printf("�޸�ʧ��.\n�����ڴ���ϵ��.\n");
            return ;
        } else
        {                            //����ʼ��ѯ
            while(p != NULL)  //1
            {                    
                if(strcmp(p->num,name)==0) //1
                {    //�ҵ�����Ϊname��l��ϵ�˾����
                    printf("������Ҫ�޸ĵı�ţ�");
                    scanf("%s",p->num); 
                    printf("������Ҫ�޸ĵ�������");
                    scanf("%s",p->name);  //1
                    printf("������Ҫ�޸ĵĻ��֣�");
                    scanf("%d",&p->total);
                    mark = 1;
                    break; 
                } else
                    p = p -> next;//1
            }
        }
        if(!mark) //1
        {                             //û�ҵ�����ϵ��
            printf("�޸�ʧ��.\n�����ڴ���ϵ��.\n"); //1
            return ;
        }
         show(); //1
}                    
 
void Free() //2
{                    
    struct member *p = head, *pr = NULL;//1
    while (p != NULL) //1
    {                    
        pr = p;//1
        p = p->next;
        free(pr);//1
    }
}