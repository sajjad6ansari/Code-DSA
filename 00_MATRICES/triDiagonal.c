#include<stdio.h>
#include<stdlib.h>

struct triDiagonalMatrix
{
    int n;
    int *A;
};

void set(struct triDiagonalMatrix *d,int i,int j,int x)
{
    
  if(i-j==1)d->A[i-2]=x;
  if(i-j==0)d->A[d->n-1+i-1]=x;
  if(i-j==-1) d->A[2*d->n-1+i-1]=x;
}
int get(struct triDiagonalMatrix d, int i, int j)
{  
  if(i-j==1) return d.A[i-2];
  else if(i-j==0) return d.A[d.n-1+i-1];
  else if(i-j==-1) return d.A[2*d.n-1+i-1]; 
  else return 0;
    
    
}

void display(struct triDiagonalMatrix d)
{
    for(int i=1;i<=d.n;i++)
    {
        for(int j=1;j<=d.n;j++)
        {
           
            if(i-j==1) printf("%d ",d.A[i-2]);
            else if(i-j==0) printf("%d ",d.A[d.n-1+i-1]);
            else if(i-j==-1) printf("%d ",d.A[2*d.n-1+i-1]);
            else printf("0 ");
        }
        printf("\n");
    }
}


int main()
{
    struct triDiagonalMatrix d;
    printf("enter the dimension of tri-diagonal matrix\n");
    scanf("%d",&(d.n));
    int l=d.n*3-2;
    d.A=(int *)malloc(sizeof(int)*(l));
    printf("enter the elements of tri-diagonal  matrix\n");
    for(int i=1;i<=d.n;i++)
    {
        for(int j=1;j<=d.n;j++)
        {
            int x;
            scanf("%d",&x);
            set(&d,i,j,x);
        }
       
    }

    display(d);
    printf("%d\n",get(d,2,3));
    printf("%d\n",get(d,3,2));
    // printing the elements stored in A which is member of triDiagonalMatrix d to show that we have stored colm wise
    for(int k=0;k<l;k++)
    {
        printf("%d ",d.A[k]);
    }


    free(d.A);
    
}

