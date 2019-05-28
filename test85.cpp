// test85.cpp : Defines the entry point for the console application.
//用链表实现对学生成绩进行存储、插入及显示功能，学生包括ID和score属性。

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct grade {         
    int score;
    char ID[6];
    struct grade *next;
}          ;
typedef struct grade NODE;  
struct grade *create();   
NODE *insert(NODE *head, NODE *pnew, int i);   
void display(NODE *head);   
void Pfree(NODE *head);    
int main() {           
    struct grade *head, *pnew;//1
    int n;
    head = create();//1
    if (head == NULL)
        return 0;
    printf("创建的链表：\n");
    display(head); //1
    pnew=(NODE *)malloc(sizeof(NODE));
    printf("请输入要插入结点的成绩和ID:\n");
    scanf("%d,%s",&pnew->score,pnew->ID);//1
    getchar();
    printf("请输入要插入结点的位置,在这个位置后面插入新结点：\n");
    scanf("%d",&n); //1
    head=insert(head, pnew, n);//1
    printf("插入后的链表：\n");
    display(head);//1
    Pfree(head);//1
    return 0;
}          
struct grade *create()  //2
{          
    NODE *head, *tail, *pnew;//1
    int score;
    char ID[6];
    head = (NODE *)malloc(sizeof(NODE));
    if (head == NULL) {        
        printf("创建失败！");
        return NULL;
    }
    head->next = NULL;
    tail = head;//1
    printf("输入学生成绩和ID：\n");
    while (1)  //1
    {          
        scanf("%d,%s",&score,ID);
        if (score<0)//1
            break;
        pnew = (NODE *)malloc(sizeof(NODE));//1
        if (pnew == NULL) {        
            printf("创建失败！");
            return NULL;
        }
        pnew->score = score;
        strcpy(pnew->ID, ID);
        pnew->next = NULL;
        tail->next = pnew;//1
        tail = pnew;//1
    }
 
    return head;//1
}          
NODE *insert(NODE *head, NODE *pnew, int i) //2
{          
    NODE *p; //1
    int j;
 
    p = head;
    for (j = 0; j<i&&p != NULL; j++)//1
        p = p->next;//1
 
    if (p == NULL)//1
    {          
        printf("插入的节点不存在！");
        return head; //1
    }
 
    pnew->next = p->next;//1
    p->next = pnew; //1
    return head; //1
}          
 
void display(NODE *head) //2
{          
    NODE *p; //1
    for (p = head->next; p != NULL; p = p->next)//2
        printf("%d,%s\n", p->score, p->ID);//1
}          
 
void Pfree(NODE *head)  //2
{          
    NODE *p, *q;//1
    p = head;
    while (p->next != NULL)//1
    {          
        q = p->next;
        p->next = q->next;//1
        free(q); //1
    }
    free(p);
}

