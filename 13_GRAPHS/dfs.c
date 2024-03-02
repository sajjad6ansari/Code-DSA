#include<stdio.h>


//call stacks are used by recursion in DFS
void DFS(int graph[][7],int vertex,int n)
{
    static int visited[7]={0};
    if(visited[vertex]==0)
    {
        visited[vertex]=1;
        printf("%d ",vertex);
        for(int j=1;j<=n;j++)
            if(graph[vertex][j]==1  && visited[j]==0)
                DFS(graph,j,n);
    }
}

int main()
{
    //vertex are 1,2,3,4,5,6 only
    //graph representation using adjacency matrix
    int graph[7][7]={{0,0,0,0,0,0,0},{0,0,1,1,0,0,0},{0,1,0,0,1,0,0},{0,1,0,0,1,0,0},{0,0,1,1,0,1,1},{0,0,0,0,1,0,0},{0,0,0,0,1,0,0}};
    
    DFS(graph,4,7);
     
}