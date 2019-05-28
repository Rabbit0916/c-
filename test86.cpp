// test86.cpp : Defines the entry point for the console application.
//在仓库管理系统中，每一个商品具有唯一的编号。因此需要对商品编号、商品的名称、数量等信息进行管理。要求利用结构体变量记录每种商品的编号、名称、数量，并建立单向链表来存放商品的信息。

#include "stdafx.h"
#include<stdio.h>
#include <string.h>
#include <stdlib.h>
struct goods{              
    char num[10];
    char name[20];
    int count;
    struct goods *next;
} *head;
 
void creat();
void show();
void Pfree(struct goods *head);
int updateCount(char num[]);
int main()
{              
    char num[10];
    creat();  //2
    show();  //2
    printf("请输入需要修改的商品编号：\n");
    scanf("%s", num); //1
    if(updateCount(num)==1)//1
      show(); //1
    Pfree (head); //1
    return 0;
}              
//创建单链表保存商品信息，并输出所有商品信息
void  creat()  //1
{              
    int s=1;
    head = (struct goods*)malloc(sizeof(struct goods)); //1
    head->next = NULL;
    struct goods *q, *tail;  //1
    tail = head;  //1
    printf("请依次输入每个商品编号、名称、数量\n");
    while (s==1)  //1
    {              
        q = (struct goods*)malloc(sizeof(struct goods));//2
        q->next = NULL;
        scanf("%s", q->num);
        getchar();
       scanf("%s",q->name);  //1
       scanf("%d",&q->count);
        tail->next = q;  //1
        tail = q; //1
        printf("输入1继续输入，输入其它数字结束输入： ");
        scanf("%d",&s);
    }
 
}              
//展示所有商品
void show()  //1
{              
printf("所有商品的信息为：\n");
 
    struct goods *out;  //1
    out = head->next;  //1
    while (out)   //1
    {              
        printf("%s %s %d\n", out->num, out->name,out->count); //1
        out = out->next;  //1
    }
}              
 
//删除商品信息
int  updateCount(char num[])  //2
{              
    struct goods *p;
    int flag = 0;                              //标记是否找到该商品
    p = head->next;    //1                          //将头结点head赋值与p
    while (p != NULL)   //1
    {              
        if (strcmp(p->num, num)==0) //2
        {              
            printf("请重新输入该商品的数量 ：\n");
            scanf("%d", &p->count);
            flag = 1; //1
            break;
        }
        else
            p = p->next;  //1
    }
 
    if (flag == 0)  //1
    {                                //没找到此商品
        printf("修改失败.\n");
        printf("库存中不存在该商品.\n");
 
    }
    return flag;  //1
}              
void Pfree(struct goods *head)//2
{              
   struct goods *p, *q; //1
    p = head;
    while (p->next != NULL) //1
    {              
        q = p->next;
        p->next = q->next;//1
        free(q);//1
    }
    free(p);
}