#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node* create(int n)
{
    struct node *p,*q,*r;
    
   p=(struct node*)malloc(sizeof(struct node));
   printf("enter data of first node of linked list \n");
   scanf("%d",&(p->data));
   p->next=NULL;
   q=p;
   int i;
   int data;

   printf("enter %d data for respective node of linked list \n",n-1);
   for(i=0;i<n-1;i++)
   
   {
    r=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&(r->data));

    r->next=NULL;
    q->next=r;
    q=r;
   }

   return p;
}
void traverse(struct node *p)
{
  struct node *t;
  t=p;
  while(t!=NULL)
  {
    printf("%d ",t->data);
    t=t->next;
  }

}
void insertEnd(struct node *p,int data)
{
  struct node *s,*t;
   t=p; 
   while(p->next!=NULL){
    p=p->next;
   }
   s=(struct node*)malloc(sizeof(struct node));
   s->data=data;
   s->next=NULL;
   p->next=s;
   p=t;
}
 
// struct node* insertBegin(struct node *p,int data)//p is loaca to the function so need to return linked list
// {
//   struct node *s;
  
//   s=(struct node *)malloc(sizeof(struct node));
//   s->data=data;
//   s->next=p; 
//   p=s;
//   return p;
// }

void insertBegin(struct node **q,int data)//q is storinf the address of head pointer p
{
  struct node *s;
  
  s=(struct node *)malloc(sizeof(struct node));
  s->data=data;
  s->next=*q;//dereferencing *p gives the value at its stored address
  *q=s;
  
}
void insert(struct node **q,int data,int position)
{
  struct node *s,*t=*q;
  s=(struct node*)malloc(sizeof(struct node));
  s->data=data;
  s->next=NULL;
  int count=0;
  while(count<position-1)
  {
    t=t->next;
    count++;
  }
  if(position>0)
  {
    s->next=t->next;
    t->next=s;
  }
  else
  {
    s->next=*q;
    *q=s;
  }

}

//this does not insert a node the begin
// void insert(struct node *head,int data,int position ) 
// {
//   struct node *ptr=head;
//   struct node *ptr2=malloc(sizeof(struct node));
//   ptr2->data=data;
//   ptr2->next=NULL;

//   while(position-1!=1)
//   {
//     ptr=ptr->next;
//     position--;

//   }
//   ptr2->next=ptr->next;
//   ptr->next=ptr2;
  
// }

void deleteFirst(struct node **p)
{
  struct node *t=*p;
  *p=t->next;
  printf("%d\n",t->data);
  free(t);  
}

int main()
{
   int n=4;
   struct node *p=create(n);
   traverse(p);
   printf("\n");
   //insert(&p,87,5);
   //insertBegin(&p,90);//passed by address so,we make modify undirectly
   deleteFirst(&p);
   traverse(p);
  //  traverse(p);
  //  printf("\n");
  //  printf("enter the position of element to be removed");
  // insertEnd(p,45);
  //  traverse(p);
  return 0;
}


