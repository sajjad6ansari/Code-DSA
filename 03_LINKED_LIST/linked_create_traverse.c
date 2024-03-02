#include<stdio.h>
#include<stdlib.h>

 struct node{
    int data;
    struct node *next;
};

struct node* create(int n){
   struct node *p,*q,*r;
   p=(struct node*)malloc(sizeof(struct node));
   scanf("%d",&(p->data));
   p->next=NULL;
   q=p;
   int i;
   for(i=0;i<n-1;i++){
    r=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&(r->data));
    r->next=NULL;
    q->next=r;
    q=r;
   }
   return p;

}

void traverse(struct node *p){
    struct node *t;
    t=p;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
    p=t;
}

int main()
{
    int n=4;
    struct node *p=create(n);
    traverse(p);
    return 0;
}