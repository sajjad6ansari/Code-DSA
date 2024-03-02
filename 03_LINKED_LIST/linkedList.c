// #include<stdio.h>
// #include<stdlib.h>

// struct Node
// {
//     int data;
//     struct Node *next;
// };

    // void create(struct Node *p)
    // {
    //     int i=1;
    //     int n;
    //     struct Node *q,*r;
    //     printf("enter the number of elements \n");
    //     scanf("%d",&n);
    //     printf("enter the all %d data elements \n",n);
    //     scanf("%d",&p->data);
    //     p->next=NULL;
    //     i++;
    //     q=p;
        
    //     while(i<=n)
    //     {
    //         r=(struct Node*)malloc(sizeof(struct Node));
    //         scanf("%d",&r->data);
    //         r->next=NULL;
    //         q->next=r;
    //         q=r;
    //         i++;
    //     }
    // }

// void traverse(struct Node *p )
// {
//     struct Node *q=p;
//     printf("\ndata elements of linked list is as follow\n");
//     while(q!=NULL)
//     {
//         printf("%d ",q->data);
//         q=q->next;
//     }
// }
// int main()
// {
//     struct Node *first,*p,*q,*r,*t;
//     first=(struct Node*)malloc(sizeof(struct Node));

//     create(first);
//     traverse(first);
//     return 0;
// }

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<stdbool.h>

struct Node
{
    int data;
    struct Node *next;
}*first=NULL,*last=NULL,*second=NULL,*third=NULL;

void create1(int A[],int n)
{
    int i=0;
    first=(struct Node*)malloc(sizeof(struct Node));
    struct Node *last,*temp;
    first->data=A[i++];
    first->next=NULL;
    last=first;
    
    for(;i<n;i++)
    {
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=A[i];
        temp->next=NULL;
        last->next=temp;   
        last=temp;
    }
}
void create2(int A[],int n)
{
    int i=0;
    second=(struct Node*)malloc(sizeof(struct Node));
    struct Node *last,*temp;
    second->data=A[i++];
    second->next=NULL;
    last=second;
    
    for(;i<n;i++)
    {
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=A[i];
        temp->next=NULL;
        last->next=temp;   
        last=temp;
    }
}
// (iterative method)
// void traverse(struct Node *p )
// {
//     struct Node *q=p;
//     printf("\ndata elements of linked list is as follow\n");
//     while(q!=NULL)
//     {
//         printf("%d ",q->data);
//         q=q->next;
//     }
// }

// traversing recursively
void traverse(struct Node *p)
{
    //by me
    // if(p==NULL)return;
    // printf("%d ",p->data);
    // traverse(p->next);

    //by sir
    if(p!=NULL) 
    {
       printf("%d ",p->data);
       traverse(p->next);  
    }

    //printing data at time of returning in traversing recursively in reverse order
    // if(p!=NULL)
    // {
    //     traverse(p->next); 
    //     printf("%d ",p->data);
    // }

}
//counting iteratively
int count(struct Node *p)
{
    int l=0;
    while(p!=0)
    {
        l++;
        p=p->next;
    }    
    return l;
}

//counting nodes recursively
// int count(struct Node *p)
// {
    //counting is at tthe time of returning only(in all below cases)

    // int x=0;
    // if(p)
    // {
    //     x=count(p->next);
    //     return 1+x;
    // } 
    // else return 0;


    // if(p!=NULL)return 1+count(p->next);
    // return 0;

    // if(p==0)return 0;
    // return count(p->next)+1;
// }

//adding the data of each node iteratively
// int add(struct Node *p)
// {
//     int sum=0;
//     while(p)
//     {
//         sum+=p->data;
//         p=p->next;
//     }
//     return sum;
// }

//adding the data of each node recursively
int add(struct Node *p)
{
    if(p==0)return 0;
    return add(p->next)+p->data;
}

//max usinf iteration
// int max(struct Node *p)
// {
//     int max=INT_MIN;
//     while(p)
//     {
//         if(p->data>max)max=p->data;
//         p=p->next;
//     }
//     return max;
// }

//max using recursion
int max(struct Node *p)
{
    if(p==0)return INT_MIN;
    int x=max(p->next);
    return x>p->data?x:p->data;
}
//linear search iteratively
// int linearSearch(struct Node *p,int key)
// {
    
//     while(p)
//     {
//         if(p->data==key)return 1;
//         p=p->next;
//     }
//     return 0;
// }

//returning the respective the address node if found
// struct Node * linearSearch(struct Node *p,int key)
// {
    
//     while(p)
//     {
//         if(p->data==key)return p;
//         p=p->next;
//     }
//     return NULL;
// }

//linear search recusively
// struct Node * linearSearch(struct Node *p,int key)
// {
//     if(p==0)return 0;
//     if(p->data==key)return p;
//     return linearSearch(p->next,key);
// }

//improved linear search by move to front
struct Node *linearSearch(struct Node *p,int key)
{
    if(p==0)return 0;
    struct Node *tail=0;
    while(p)
    {
        if(p->data==key)
        {
            tail->next=p->next;
            p->next=first;
            return first=p;
        }
        tail=p;
        p=p->next;
    }
}

void insert(struct Node *p,int index,int x)
{
    if(index<0 || index>count(p)) return;
    struct Node *t=(struct Node *)malloc(sizeof(struct Node));
    t->data=x;
    if(index==0)//insert at first 
    {
        t->next=first;
        first=t;
    }
    else
    {
        int i;//inserts after index
        for(i=1;i<index;i++)p=p->next;//here  p checks if passed position is greater than real position
        t->next=p->next;
        p->next=t;
    }
}

void insertAtLast(int x)
{
    struct Node *t=(struct Node*)malloc(sizeof(struct Node));
    t->data=x;
    t->next=NULL;
    if(first==NULL)first=last=t;
    else
    {
        last->next=t;
        last=t;
    }
}

void insertInSortedList(struct Node *p,int x)
{
    struct Node *t,*q;
    t=(struct Node*)malloc(sizeof(struct Node));
    q=NULL;
    t->data=x;
    t->next=NULL;
    if(first==0)first=t;
    else
    {
        while (p && p->data<x)
        {
            q=p;
            p=p->next;
        }
        if(p==first)
        {
            t->next=first;
            first=t;
        }
        else
        {
            t->next=q->next;
            q->next=t;
        }
    }

}



bool isLLsorted(struct Node *q)
{
    int x=INT_MIN;
    while(q!=NULL)
    {
        if(x>q->data)return false;
        x=q->data;
        q=q->next;
    }
    return true;
}

int delete(struct Node *p,int pos)
{
    int x=-1;
    // if(pos<0)return x;
    if(pos==0)
    {
        struct Node *t;
        t=p;
        first=first->next;
        x=p->data;
        free(t);
        return x;
    }
    int i;
    struct Node *q=NULL,*t=p;
    for(i=1;i<pos && t!=NULL ;i++)
    {
        q=t;
        t=t->next;
    }
    if(t!=NULL && q!=NULL)//q!=NULL for negative index
    {
        q->next=t->next;
        x=t->data;
        free(t);
    }
    return x;

}

//for unsorted list
void removeDuplicate2(struct Node *p)
{
    struct Node *q=p;
    while(p!=NULL)
    {
        int x=p->data;
        struct Node *t=p;
        q=p->next;
        while(q!=NULL)
        {
            if(x==q->data)
            {
                t->next=q->next;
                free(q);
                q=t;
                // q=t->next; both these statements are for q=t;
                // continue;
            }
            t=q;
            q=q->next;
        }
        p=p->next;
    }        
}

void removeDuplicate1(struct Node *p)
{
    struct Node *q=p->next;
    while(q!=NULL)
    {
        if(p->data!=q->data)
        {
            p=q;
            q=q->next;
        }
        else
        {
            p->next=q->next;
            free(q);
            q=p->next;
        }
    }
}


struct Node* reverse(struct Node *r)
{
    struct Node *p=NULL,*q=NULL;
    while(r!=NULL)
    {
        p=q;
        q=r;
        r=r->next;
        q->next=p;
    }
    return q;
}

void reverseRecursively(struct Node *q,struct Node *p)//q is following p
{
   if(p!=NULL)
   {
        reverseRecursively(p,p->next);
        p->next=q;
   }
   else first=q;
}

void concatenation(struct Node *p,struct Node *q)//appending p with q
{
    struct Node *t;
    while(p!=NULL)
    {   
        t=p;
        p=p->next;
    }
    t->next=q;
    second=NULL;
}

void merge(struct Node *p,struct Node *q)//merging p and q
{
    struct Node *last;
    if(p->data<q->data)
    {
        third=last=p;
        p=p->next;
        last->next=NULL;
    }
    else
    {
        third=last=q;
        q=q->next;
        last->next=NULL;
    }
    while(p!=NULL && q!=NULL)
    {
        if(p->data<q->data)
        {
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;//recommended
        }
        else
        {
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }
    if(p!=NULL)last->next=p;
    if(q!=NULL)last->next=q;
}

int isLoop(struct Node *p)
{
    struct Node *q=p,*t=p;
    do{
        q=q->next;
        t=t->next;
        if(t!=NULL)t=t->next;
        else t=NULL;
    }while(q!=t && t!=NULL && q!=NULL);
    if(q==t)return 1;
    else return 0;

}
int main()
{
    int A[]={5,6,8,45,45,67,67,69,78,78};   
    create1(A,10);
    int B[]={2,4,23,46,90};   
    create2(B,5);
    // merge(first,second);
    // concatenation(first,second);
    // struct Node *q=NULL;
    // removeDuplicate1(first);
    // reverseRecursively(q,first);
    // printf("deleted element : %d \n",delete(first,-122));
    // traverse(third);
    // traverse(first);
    // printf("\n");
    // printf("no of nodes in given linked list is %d\n",count(first));
    // printf("sum of data of all nodes in given linked list is %d\n",add(first));
    // printf("max of data of all nodes in given linked list is %d\n",max(first));
    // struct Node *key=linearSearch(first,8);
    // if(key)printf("search succesful and address is %u\n",key);
    // else printf("unsuccessful search\n");
    // insert(first,-4,56);
    // insertAtLast(5);
    // insertAtLast(6);
    // insertAtLast(7); 
    // insertAtLast(8); 
    // insertAtLast(89);
    // insertInSortedList(first,2);
    // insertInSortedList(first,1);
    // insertInSortedList(first,3);
    // // insertInSortedList(first,44);
    // insertInSortedList(first,44);
    // printf("%d\n",delete(first,1));
    // traverse(first);
    // printf("\n");
    // printf("%d\n",delete(first,9));
    // traverse(first);
    // printf("isLLsorted : %d",isLLsorted(first));

    // for LOOP
    struct Node *t1=first->next->next;
    struct Node *t2=first->next->next->next->next;
    t2->next=t1;
    printf("isLOOP : %d \n",isLoop(second));
    printf("isLOOP : %d \n",isLoop(first));
    return 0;
}