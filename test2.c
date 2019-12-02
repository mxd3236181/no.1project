<<<<<<< HEAD
  /  /这是杨辉三角
=======
﻿//这是杨辉三角
>>>>>>> 71013c1019c2b71887288cabe2dbcb67158f7da4

#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

#define MAXQSIZE 200
typedef int QElemType;
typedef struct {
    QElemType  *base;
    int front;
    int rear;
}SqQueue;
void InitQueue(SqQueue *Q){
    
    Q->base=(QElemType *)malloc(MAXQSIZE*sizeof(QElemType));
        if(!Q->base)exit(1);
    Q->front=Q->rear=0;
}
int QueueLength(SqQueue *Q){
    
    int e;
    e=(Q->rear-Q->front+MAXQSIZE)%MAXQSIZE;
    return e;//zq改
}
void EnQueue(SqQueue *Q,QElemType e){
    
    if((Q->rear+1)%MAXQSIZE ==Q->front) exit(1); //yy改
    Q->base[Q->rear]=e;
    Q->rear=(Q->rear+1)%MAXQSIZE;
}
void DeQueue(SqQueue *Q){
    
    if(Q->front==Q->rear)
        exit(0); //第六个错 这个改为exit(1);
    //e=Q.base[Q.front];
    Q->front=(Q->front+1)%MAXQSIZE;
}
QElemType GetHead(SqQueue *Q){
    
    return Q->base[Q->front];
}
int main(){
    int a,n,c;
    QElemType t,x;
    SqQueue f,*Q;
    Q=&f;
    InitQueue(Q);
    printf("请输入杨辉三角规模:\n");
    scanf("%d",&a);
    EnQueue(Q,1);
    for(n=2;n<=a;n++){        EnQueue(Q,1);
        for(c=1;c<=n-2;c++){
            t=GetHead(Q);
            DeQueue(Q);
            printf("%4d",t);
            x=GetHead(Q);
            t=t+x;
            EnQueue(Q,t);   
        }
        EnQueue(Q,1);
        printf("%4d",GetHead(Q));
        DeQueue(Q);
        printf("\n");
    }
    while(Q->front!=Q->rear){
            printf("%4d",GetHead(Q));
            DeQueue(Q);
        }
    return  0; 
    }
    //每位小组成员将次代码修改错误，直至完全正确。
//操作成功