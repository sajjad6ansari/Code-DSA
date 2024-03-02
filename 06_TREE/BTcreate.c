#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    struct node *left;
    int data;
    struct node *right;
}node;

typedef struct queue
{
    int size;
    node **A;
    int front;
    int rear;
}queue;

void enqueue(queue *q,node *r)
{
    if((q->rear+1)%q->size==q->front)
    {
        printf("queue is full\n");
        return;
    }
    q->rear=q->rear+1;
    q->A[q->rear]=r;

}

node* dequeue(queue *q)
{
    node *r=NULL;
    if(q->front==q->rear) printf("queue is empty");
    else
    {
        q->front=(q->front+1)%q->size;
        r=q->A[q->front];  
    }
    return r;
}

int isqEmpty(queue *q)
{
    if(q->front==q->rear)return 1;//since this condition for both full or empty but here full case will not occur as we are continously doing both enqueue or dequeue
    else return 0;
}

typedef struct stack
{
    int size;
    node **A;
    int top;
}stack;

void push(stack *s,node *t)
{
    if(s->top==s->size-1)
    {
        printf("stack is full\n");
        return;
    }
    s->top++;
    s->A[s->top]=t;
}

node * pop(stack *s)
{
    node *t=NULL;
    if(s->top==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
       t=s->A[s->top--];
    }
    return t;
}

int isSempty(stack *s)
{
    if(s->top==-1) return 1;
    return 0;
}

node * create()
{
    queue q;
    q.size=10;
    q.A=(node **)malloc(sizeof(node *)*q.size);
    q.front=-1;
    q.rear=-1;
    int x;
    node *p,*t; 
    printf("enter the root element \n");
    scanf("%d",&x);
    node *root=(node *)malloc(sizeof(node));
    root->data=x;
    root->left=NULL;
    root->right=NULL;
    enqueue(&q,root);
    while(!(isqEmpty(&q)))
    {
        p=dequeue(&q);
        printf("enter the left child \n");
        scanf("%d",&x);
        if(x!=-1)
        {
            t=(node *)malloc(sizeof(node));
            t->data=x;
            t->left=NULL;
            t->right=NULL;
            p->left=t;
            enqueue(&q,t);

        }
        printf("enter the right child \n");
        scanf("%d",&x);
        if(x!=-1)
        {
            t=(node *)malloc(sizeof(node));
            t->data=x;
            t->left=NULL;
            t->right=NULL;
            p->right=t;
            enqueue(&q,t);

        }
    }
    free(q.A);
    return root;
}

void inorder(node *t)
{
    if(t!=NULL)
    {
        inorder(t->left);
        printf("%d ",t->data);
        inorder(t->right);
    }
}

//iteratively using stack
void preorderI(node *t)
{
    stack s;
    s.size=10;
    s.A=(node **)malloc(sizeof(node *)*s.size);
    s.top=-1;
    while(t!=NULL || !isSempty(&s))
    {
        if(t!=NULL)
        {
            printf("%d ",t->data);
            push(&s,t);
            t=t->left;
        }
        else
        {
            t=pop(&s);
            t=t->right;
        }
    }
    
}

void inorderI(node *t)
{
    stack s;
    s.size=10;
    s.A=(node **)malloc(sizeof(node *)*s.size);
    s.top=-1;
    while(t!=NULL || !isSempty(&s))
    {
        if(t!=NULL)
        {
            push(&s,t);
            t=t->left;
        }
        else
        {
            t=pop(&s);
            printf("%d ",t->data);
            t=t->right;
        }
    }
    
}

void levelorder(node *t)
{
    queue q;
    q.size=10;
    q.A=(node **)malloc(sizeof(node *)*q.size);
    q.front=-1;
    q.rear=-1;
    enqueue(&q,t);
    if(t!=NULL)printf("%d ",t->data);
    node *p;
    while(!isqEmpty(&q))
    {
        p=dequeue(&q);
        if(p->left!=NULL)
        {
            printf("%d ",p->left->data);
            enqueue(&q,p->left);
        }
        if(p->right!=NULL)
        {
            printf("%d ",p->right->data);
            enqueue(&q,p->right);
        }
    }
}

int count(node *t)
{
    int x,y;
    if(t!=NULL)
    {
        x=count(t->left);   
        y=count(t->right);   
        return x+y+1;
    }
    return 0;
}

void postorderI(node *t)
{
    stack s;
    s.size=10;
    s.A=(node **)malloc(sizeof(node *)*s.size);
    s.top=-1;
    while(t!=NULL || !isSempty(&s))
    {
        if(t!=NULL)
        {
            push(&s,t);
            t=t->left;
        }
        else
        {
            t=pop(&s);
            printf("%d ",t->data);
            t=t->right;
        }
    }
    
}
int main()
{
    node *root=create();
    // inorder(root);
    // printf("\npreorder : ");
    // preorderI(root);
    // printf("\nlevelorder : ");
    // levelorder(root);
    printf("the nos of nodes in BT : %d\n",count(root));

}