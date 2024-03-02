#include<stdio.h>
#include<stdlib.h>

struct toeplitzMatrix
{
    int n;
    int *A;
};

void set(struct toeplitzMatrix *d,int i,int j,int x)
{
    if(i-j<=0) d->A[j-i]=x;
    else d->A[d->n+i-j-1]=x;

}
int get(struct toeplitzMatrix d, int i, int j)
{
    
    if(i>j)return d.A[d.n+i-j-1];
   else return d.A[j-i];
    
}
void display(struct toeplitzMatrix d)
{
    for(int i=1;i<=d.n;i++)
    {
        for(int j=1;j<=d.n;j++)
        {
            if(i>j)printf("%d ",d.A[d.n+i-j-1]);
            else printf("%d ",d.A[j-i]);
        }
        printf("\n");
    }
}

int main()
{
    struct toeplitzMatrix d;
    printf("enter the dimension of toeplitz matrix\n");
    scanf("%d",&(d.n));
    int l=d.n*2-1;
    d.A=(int *)malloc(sizeof(int)*(l));
    printf("enter the elements of toeplitz matrix\n");
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
  


    free(d.A);
}