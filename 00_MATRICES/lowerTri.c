// #include<stdio.h>
// #include<stdlib.h>

// struct lowerTriMatrixRowMajor
// {
//     int n;
//     int *A;
// };

// void set(struct lowerTriMatrixRowMajor *d,int i,int j,int x)
// {
    
//   if(i>=j)d->A[i*(i-1)/2+j-1]=x;
// }
// int get(struct lowerTriMatrixRowMajor d, int i, int j)
// {
    
//     if(i>=j)return d.A[i*(i-1)/2+j-1];
//     else return 0;
// }
// void display(struct lowerTriMatrixRowMajor d)
// {
//     for(int i=1;i<=d.n;i++)
//     {
//         for(int j=1;j<=d.n;j++)
//         {
//             if(i>=j)printf("%d ",d.A[i*(i-1)/2+j-1]);
//             else printf("0 ");
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     struct lowerTriMatrixRowMajor d;
//     printf("enter the dimension of lower triangular matrix\n");
//     scanf("%d",&(d.n));
//     int l=d.n*(d.n+1)/2;
//     d.A=(int *)malloc(sizeof(int)*(l));
//     printf("enter the elements of lower triangular matrix\n");
    // for(int i=1;i<=d.n;i++)
    // {
    //     for(int j=1;j<=d.n;j++)
    //     {
    //         int x;
    //         scanf("%d",&x);
    //         set(&d,i,j,x);
    //     }
       
    // }
//     display(d);



//     free(d.A);
// }



#include<stdio.h>
#include<stdlib.h>

struct lowerTriMatrixColmMajor
{
    int n;
    int *A;
};

void set(struct lowerTriMatrixColmMajor *d,int i,int j,int x)
{
    
  if(i>=j)d->A[(d->n)*(j-1)-(j-2)*(j-1)/2+i-j]=x;
}
int get(struct lowerTriMatrixColmMajor d, int i, int j)
{
    
    if(i>=j)return d.A[(d.n)*(j-1)-(j-2)*(j-1)/2+i-j];
    else return 0;
}
void display(struct lowerTriMatrixColmMajor d)
{
    for(int i=1;i<=d.n;i++)
    {
        for(int j=1;j<=d.n;j++)
        {
            if(i>=j)printf("%d ",d.A[(d.n)*(j-1)-(j-2)*(j-1)/2+i-j]);
            else printf("0 ");
        }
        printf("\n");
    }
}

int main()
{
    struct lowerTriMatrixColmMajor d;
    printf("enter the dimension of lower triangular matrix\n");
    scanf("%d",&(d.n));
    int l=d.n*(d.n+1)/2;
    d.A=(int *)malloc(sizeof(int)*(l));
    printf("enter the elements of lower triangular matrix\n");
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