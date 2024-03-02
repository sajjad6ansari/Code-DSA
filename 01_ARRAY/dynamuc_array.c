#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p ,*q,i;
    p=(int *)malloc(5*sizeof(int));
    for(i=0;i<5;i++)
    {
        p[i]=i+3;
    }
    q=(int *)malloc(10*sizeof(int));
    for(i=0;i<5;i++)
    {
        q[i]=p[i];
    }

    //delete []p; in c++  
    free(p);
    p=q;
    q=NULL;
    
    //p[6]=23;
    for(i=5;i<10;i++)
    {
        p[i]=i+2;
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",p[i]);
        
    }
    return 0;

    


}