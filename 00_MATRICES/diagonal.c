#include<stdio.h>
#include<stdlib.h>

struct Diagonal
{
    int n;
    int *A;
};

void set(struct Diagonal *d,int i,int j,int x)
{
  if(i==j)d->A[i-1]=x;
}
int get(struct Diagonal d, int i, int j)
{
    if(i==j)return d.A[i-1];
    else return 0;
}
void display(struct Diagonal d)
{
    for(int i=1;i<=d.n;i++)
    {
        for(int j=1;j<=d.n;j++)
        {
            if(i==j)printf("%d ",d.A[i-1]);
            else printf("0 ");
        }
        printf("\n");
    }
}

int main()
{
    struct Diagonal d;
    printf("enter the dimension of diagonal matrix\n");
    scanf("%d",&(d.n));
    d.A=(int *)malloc(sizeof(int)*(d.n));

    display(d);



    free(d.A);
}