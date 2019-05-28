// test84.cpp : Defines the entry point for the console application.
//模拟商场会员卡，对会员姓名、编号、积分进行管理，利用结构体变量记录会员的姓名、编号和积分，建立单向链表来存储会员的信息。
//要求实现如下功能：

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
    printf("请输入要修改的会员编号：\n");
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
        printf("请依次输入每个会员的编号、姓名、积分： \n");
        q = (struct member *)malloc(sizeof(struct member));//1
        q->next = NULL; //1
        scanf("%s %s %d",q->num,q->name,&q->total);//1
        tail->next = q;  //1
        tail = q;  //1
        printf("是否继续输入,按Y键继续输入，其他键就结束.\n");
        getchar();
        flag = getchar(); //1
      }
}                    
void show() //2
{                    
    struct member *out;  //1
        out = head->next;  //1
    printf("请依次输出每个会员的编号、姓名、积分： \n");
    while(out)//1
    {                    
    printf("%s %s %d\n", out->num,out->name,out->total);//1
    out = out->next;  
    }
}                    
//更新联系人的信息
void upd(char name[]) //2
{                    
    struct member *p; //1
     int  mark;
        mark = 0;                           //标记是否找到该联系人
        p = head;    //1                           //将头结点head赋值与p
        if(head == NULL)  
        {                 //如果链表中头结点为空，则查询错误
            printf("修改失败.\n不存在此联系人.\n");
            return ;
        } else
        {                            //否则开始查询
            while(p != NULL)  //1
            {                    
                if(strcmp(p->num,name)==0) //1
                {    //找到姓名为name的l联系人就输出
                    printf("请输入要修改的编号：");
                    scanf("%s",p->num); 
                    printf("请输入要修改的姓名：");
                    scanf("%s",p->name);  //1
                    printf("请输入要修改的积分：");
                    scanf("%d",&p->total);
                    mark = 1;
                    break; 
                } else
                    p = p -> next;//1
            }
        }
        if(!mark) //1
        {                             //没找到此联系人
            printf("修改失败.\n不存在此联系人.\n"); //1
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