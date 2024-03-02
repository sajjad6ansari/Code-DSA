// #include<stdio.h>
// #include<stdlib.h>

// struct upperTriMatrixRowMajor
// {
//     int n;
//     int *A;
// };

// void set(struct upperTriMatrixRowMajor *d,int i,int j,int x)
// {
    
//   if(j>=i)d->A[d->n*(i-1)-(i-2)*(i-1)/2+j-i]=x;
// }
// int get(struct upperTriMatrixRowMajor d, int i, int j)
// {
    
//     if(j>=i)return d.A[d.n*(i-1)-(i-2)*(i-1)/2+j-i];
//     else return 0;
// }
// void display(struct upperTriMatrixRowMajor d)
// {
//     for(int i=1;i<=d.n;i++)
//     {
//         for(int j=1;j<=d.n;j++)
//         {
//             if(j>=i)printf("%d ",d.A[d.n*(i-1)-(i-2)*(i-1)/2+j-i]);
//             else printf("0 ");
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     struct upperTriMatrixRowMajor d;
//     printf("enter the dimension of upper triangular matrix\n");
//     scanf("%d",&(d.n));
//     int l=d.n*(d.n+1)/2;
//     d.A=(int *)malloc(sizeof(int)*l);
//     printf("enter the elements of upper triangular matrix\n");
//     for(int i=1;i<=d.n;i++)
//     {
//         for(int j=1;j<=d.n;j++)
//         {
//             int x;
//             scanf("%d",&x);
//             if(i<=j)set(&d,i,j,x);
//         }
       
//     }
//     //display(d);
//     printf("%d",get(d,2,3));
 //printing the elements stored in A which is member of upperTriMatrixColmMajor d to show that we have stored row-wise
    // for(int k=0;k<l;k++)
    // {
    //     printf("%d ",d.A[k]);
    // }


//     free(d.A);
// }


#include<stdio.h>
#include<stdlib.h>

struct upperTriMatrixColmMajor
{
    int n;
    int *A;
};

void set(struct upperTriMatrixColmMajor *d,int i,int j,int x)
{
    
  if(j>=i)d->A[(j-1)*j/2+i-1]=x;
}
int get(struct upperTriMatrixColmMajor d, int i, int j)
{
    
    if(j>=i)return d.A[(j-1)*j/2+i-1];
    else return 0;
}
void display(struct upperTriMatrixColmMajor d)
{
    for(int i=1;i<=d.n;i++)
    {
        for(int j=1;j<=d.n;j++)
        {
            if(j>=i)printf("%d ",d.A[(j-1)*j/2+i-1]);
            else printf("0 ");
        }
        printf("\n");
    }
}

int main()
{
    struct upperTriMatrixColmMajor d;
    printf("enter the dimension of upper triangular matrix\n");
    scanf("%d",&(d.n));
    int l=d.n*(d.n+1)/2;
    d.A=(int *)malloc(sizeof(int)*(l));
    printf("enter the elements of upper triangular matrix\n");
    for(int i=1;i<=d.n;i++)
    {
        for(int j=1;j<=d.n;j++)
        {
            int x;
            scanf("%d",&x);
            if(j>=i)set(&d,i,j,x);
        }
       
    }
    display(d);
    printf("%d\n",get(d,2,3));
    //printing the elements stored in A which is member of upperTriMatrixColmMajor d to show that we have stored colm wise
    for(int k=0;k<l;k++)
    {
        printf("%d ",d.A[k]);
    }


    free(d.A);
}