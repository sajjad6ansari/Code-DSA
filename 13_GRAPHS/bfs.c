#include<stdio.h>
#include<stdlib.h>
// node to implement queue using linked list
struct node
{
    int data;
    struct node *next;
};


// queue structue,enqueue(),dequeue(),isqEmpty()
struct queue
{
    struct node *front;
    struct node *rear;
};

void enqueue(struct queue *q, int vertex)
{
    struct node *t=(struct node *)malloc(sizeof(struct node));
    t->data=vertex;
    t->next=NULL;
    if(q->rear!=NULL)q->rear->next=t;
    q->rear=t;
    if(q->front==NULL)q->front=t;// only for first enqueued node 
    
}

int dequeue(struct queue *q)
{
    if(q->front!=NULL)
    {
        int t=q->front->data;
        q->front=q->front->next;
        return t;
    }
    return 0;
}

int isqEmpty(struct queue *q)
{
    if(q->rear==NULL)return 1;
    return 0;
}

// Breadth First Search --graph traversal 
void BFS(int graph[][7],int start,int n)
{
    int i=start;
    struct queue *q=(struct queue *)malloc(sizeof(struct queue));
    q->front=NULL;
    q->rear=NULL;
    int visited[7]={0};
    printf("%d ",i);
    visited[i]= 1;
    enqueue(q,i);

    while(!isqEmpty(q))
    {
        i=dequeue(q);
        int j;
        for(j=0;j<n;j++)
        {
            if(graph[i][j]==1 && visited[j]==0)
            {
                printf("%d ",j);
                visited[j]=1;
                enqueue(q,j);
            }
        }
    }
}
int main()
{
    //vertex are 1,2,3,4,5,6 only
    //graph representation using adjacency matrix
    int graph[7][7]={{0,0,0,0,0,0,0},{0,0,1,1,0,0,0},{0,1,0,0,1,0,0},{0,1,0,0,1,0,0},{0,0,1,1,0,1,1},{0,0,0,0,1,0,0},{0,0,0,0,1,0,0}};
    
    BFS(graph,3,7);
     
}







