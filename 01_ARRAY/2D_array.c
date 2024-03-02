#include<stdio.h>
#include<stdlib.h>

int main()
{
    int A[3][4]={{3,5,6,7},{9,0,8,5},{1,4,5,6}};
    int *B[3];
    // B[0]=new int[4];
    // B[0]=new int[4]; 

    // B[0]=new int[4];  in c++

     B[0]=(int*)malloc(4*sizeof(int));
     B[1]=(int *)malloc(4*sizeof(int));
     B[2]=(int *)malloc(4*sizeof(int));

     int **C;
    C=(int **) malloc(3*sizeof(int *));
    C[0]=(int *) malloc(4*sizeof(int));
    C[1]=(int *) malloc(4*sizeof(int));
    C[2]=(int *) malloc(4*sizeof(int));
    

    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
 
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            
            B[i][j]=i*j;
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            
            C[i][j]=i*j;
        }
        printf("\n");
    }
printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",B[i][j]);
            
        }
        printf("\n");
    }
printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",C[i][j]);
            
        }
        printf("\n");
    }
    printf("\n");
   
     return 0;
}