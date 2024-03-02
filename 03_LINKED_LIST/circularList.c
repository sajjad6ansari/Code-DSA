#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<stdbool.h>

struct Node
{
    int data;
    struct Node *next;
}*Head=NULL;


//we can create circular ll following method
//ooorrrr
//by head node as empty node .......the benefit is that if there is no node then also it will be circular
void create(int A[],int n)
{
    int i;
    struct Node *t,*last;
    Head=(struct Node*)malloc(sizeof(struct Node));
    Head->data=A[0];
    Head->next=Head;//this will make it eventually a circular linked list
    last=Head;

    for(i=1;i<n;i++)
    {
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=A[i];
    t->next=last->next;
    last->next=t;
    last=t;
 }
}
void display(struct Node *p)
{
    do{
        printf("%d ",p->data);
        p=p->next;
    }while(p!=Head);
    printf("\n");
}

void displayRecursive(struct Node *p)
{
    static int flag=0;//globally declared just for this function,,,for other funs , it does not exist 
    if(p!=Head || flag==0)
    {
        flag=1;
        displayRecursive(p->next);
    }
}
int length(struct Node *p)
{
    int l=0;
    do{
        printf("%d ",p->data);
        p=p->next;
        l++;
    }while(p!=Head);
    printf("\n");
    return l;
}

void insert(struct Node *p,struct Node *t,int pos)
{
    if(pos<0 || pos> length(Head)) return;
    if(pos==0)//it is not necessary to move the head to the  element inserted before head , its our choice
    {
        if(Head==NULL)
        {
            Head=t;
            t->next=Head;
        }
        else
        {
            while(p->next!=Head) p=p->next;
            t->next=Head;
            p->next=t;
            Head=t;//this will change the head
        }
    }
    else
    {
        int i;
        for(i=1;i<pos;i++)
        {
            p=p->next;
        }

        t->next=p->next;
        p->next=t;
    }
}

void delete(struct Node *p,int pos)
{
    if(pos<0 || pos >length(Head)-1) return;
    struct Node *t=NULL;
    if(pos==0)
    {
        if(Head==NULL)return;
        else
        {
            while(p->next!=Head)p=p->next;
            t=Head;
            p->next=t->next;
            Head=t->next;
            free(t);
        }
    }
    else
    {
        int i=1;
        for(;i<pos;i++)p=p->next;
        t=p->next;
        p->next=t->next;
        free(t);
    }
}
int main()
{
    int A[]={4,9,3,0,6,5};
    create(A,6);
    // display(Head);
    // displayRecursive(Head);
    struct Node *t=(struct Node *)malloc(sizeof(struct Node));
    t->data=45;
    t->next=NULL;
    // insert(Head,t,7);
    // delete(Head,5);
    display(Head);

}