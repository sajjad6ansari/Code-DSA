#include<stdio.h>
#include<stdlib.h>

struct SymmlowerTriMatrixColmMajor
{
    int n;
    int *A;
};

void set(struct SymmlowerTriMatrixColmMajor *d,int i,int j,int x)
{
    
  if(i>=j)d->A[(d->n)*(j-1)-(j-2)*(j-1)/2+i-j]=x;
}
int get(struct SymmlowerTriMatrixColmMajor d, int i, int j)
{  

    if(i<j)
    {
        int k=i;
        i=j;
        j=k;
    }
    return d.A[(d.n)*(j-1)-(j-2)*(j-1)/2+i-j];
    
}

void display(struct SymmlowerTriMatrixColmMajor d)
{
    for(int i=1;i<=d.n;i++)
    {
        for(int j=1;j<=d.n;j++)
        {
           
            if(i>=j)printf("%d ", d.A[(j - 1) * d.n - (j - 2) * (j - 1) / 2 + i - j]);
            else printf("%d ", d.A[(i - 1) * d.n - (i - 2) * (i - 1) / 2 - i + j]);
            
        }
        printf("\n");
    }
}


int main()
{
    struct SymmlowerTriMatrixColmMajor d;
    printf("enter the dimension of symmetric triangular matrix\n");
    scanf("%d",&(d.n));
    int l=d.n*(d.n+1)/2;
    d.A=(int *)malloc(sizeof(int)*(l));
    printf("enter the elements of symmetric triangular matrix\n");
    for(int i=1;i<=d.n;i++)
    {
        for(int j=1;j<=d.n;j++)
        {
            int x;
            scanf("%d",&x);
            if(i>=j)set(&d,i,j,x);
        }
       
    }
    display(d);
    printf("%d\n",get(d,2,3));
    printf("%d\n",get(d,3,2));
    // printing the elements stored in A which is member of SymmlowerTriMatrixColmMajor d to show that we have stored colm wise
    for(int k=0;k<l;k++)
    {
        printf("%d ",d.A[k]);
    }


    free(d.A);
    
}

